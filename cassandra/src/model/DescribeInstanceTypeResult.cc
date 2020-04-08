/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/cassandra/model/DescribeInstanceTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeInstanceTypeResult::DescribeInstanceTypeResult() :
	ServiceResult()
{}

DescribeInstanceTypeResult::DescribeInstanceTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceTypeResult::~DescribeInstanceTypeResult()
{}

void DescribeInstanceTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTypeSpecListNode = value["InstanceTypeSpecList"]["InstanceTypeSpec"];
	for (auto valueInstanceTypeSpecListInstanceTypeSpec : allInstanceTypeSpecListNode)
	{
		InstanceTypeSpec instanceTypeSpecListObject;
		if(!valueInstanceTypeSpecListInstanceTypeSpec["InstanceType"].isNull())
			instanceTypeSpecListObject.instanceType = valueInstanceTypeSpecListInstanceTypeSpec["InstanceType"].asString();
		if(!valueInstanceTypeSpecListInstanceTypeSpec["CpuSize"].isNull())
			instanceTypeSpecListObject.cpuSize = std::stol(valueInstanceTypeSpecListInstanceTypeSpec["CpuSize"].asString());
		if(!valueInstanceTypeSpecListInstanceTypeSpec["MemSize"].isNull())
			instanceTypeSpecListObject.memSize = std::stol(valueInstanceTypeSpecListInstanceTypeSpec["MemSize"].asString());
		instanceTypeSpecList_.push_back(instanceTypeSpecListObject);
	}

}

std::vector<DescribeInstanceTypeResult::InstanceTypeSpec> DescribeInstanceTypeResult::getInstanceTypeSpecList()const
{
	return instanceTypeSpecList_;
}

