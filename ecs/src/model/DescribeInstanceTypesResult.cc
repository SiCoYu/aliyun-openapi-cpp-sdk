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

#include <alibabacloud/ecs/model/DescribeInstanceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceTypesResult::DescribeInstanceTypesResult() :
	ServiceResult()
{}

DescribeInstanceTypesResult::DescribeInstanceTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceTypesResult::~DescribeInstanceTypesResult()
{}

void DescribeInstanceTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTypesNode = value["InstanceTypes"]["InstanceType"];
	for (auto valueInstanceTypesInstanceType : allInstanceTypesNode)
	{
		InstanceType instanceTypesObject;
		if(!valueInstanceTypesInstanceType["EniTotalQuantity"].isNull())
			instanceTypesObject.eniTotalQuantity = std::stoi(valueInstanceTypesInstanceType["EniTotalQuantity"].asString());
		if(!valueInstanceTypesInstanceType["LocalStorageCategory"].isNull())
			instanceTypesObject.localStorageCategory = valueInstanceTypesInstanceType["LocalStorageCategory"].asString();
		if(!valueInstanceTypesInstanceType["PrimaryEniQueueNumber"].isNull())
			instanceTypesObject.primaryEniQueueNumber = std::stoi(valueInstanceTypesInstanceType["PrimaryEniQueueNumber"].asString());
		if(!valueInstanceTypesInstanceType["MemorySize"].isNull())
			instanceTypesObject.memorySize = std::stof(valueInstanceTypesInstanceType["MemorySize"].asString());
		if(!valueInstanceTypesInstanceType["LocalStorageCapacity"].isNull())
			instanceTypesObject.localStorageCapacity = std::stol(valueInstanceTypesInstanceType["LocalStorageCapacity"].asString());
		if(!valueInstanceTypesInstanceType["InstanceFamilyLevel"].isNull())
			instanceTypesObject.instanceFamilyLevel = valueInstanceTypesInstanceType["InstanceFamilyLevel"].asString();
		if(!valueInstanceTypesInstanceType["InstancePpsRx"].isNull())
			instanceTypesObject.instancePpsRx = std::stol(valueInstanceTypesInstanceType["InstancePpsRx"].asString());
		if(!valueInstanceTypesInstanceType["EniIpv6AddressQuantity"].isNull())
			instanceTypesObject.eniIpv6AddressQuantity = std::stoi(valueInstanceTypesInstanceType["EniIpv6AddressQuantity"].asString());
		if(!valueInstanceTypesInstanceType["MaximumQueueNumberPerEni"].isNull())
			instanceTypesObject.maximumQueueNumberPerEni = std::stoi(valueInstanceTypesInstanceType["MaximumQueueNumberPerEni"].asString());
		if(!valueInstanceTypesInstanceType["InstanceTypeId"].isNull())
			instanceTypesObject.instanceTypeId = valueInstanceTypesInstanceType["InstanceTypeId"].asString();
		if(!valueInstanceTypesInstanceType["InstanceBandwidthRx"].isNull())
			instanceTypesObject.instanceBandwidthRx = std::stoi(valueInstanceTypesInstanceType["InstanceBandwidthRx"].asString());
		if(!valueInstanceTypesInstanceType["SecondaryEniQueueNumber"].isNull())
			instanceTypesObject.secondaryEniQueueNumber = std::stoi(valueInstanceTypesInstanceType["SecondaryEniQueueNumber"].asString());
		if(!valueInstanceTypesInstanceType["GPUSpec"].isNull())
			instanceTypesObject.gPUSpec = valueInstanceTypesInstanceType["GPUSpec"].asString();
		if(!valueInstanceTypesInstanceType["InstanceBandwidthTx"].isNull())
			instanceTypesObject.instanceBandwidthTx = std::stoi(valueInstanceTypesInstanceType["InstanceBandwidthTx"].asString());
		if(!valueInstanceTypesInstanceType["QueuePairNumber"].isNull())
			instanceTypesObject.queuePairNumber = std::stoi(valueInstanceTypesInstanceType["QueuePairNumber"].asString());
		if(!valueInstanceTypesInstanceType["EriQuantity"].isNull())
			instanceTypesObject.eriQuantity = std::stoi(valueInstanceTypesInstanceType["EriQuantity"].asString());
		if(!valueInstanceTypesInstanceType["GPUAmount"].isNull())
			instanceTypesObject.gPUAmount = std::stoi(valueInstanceTypesInstanceType["GPUAmount"].asString());
		if(!valueInstanceTypesInstanceType["TotalEniQueueQuantity"].isNull())
			instanceTypesObject.totalEniQueueQuantity = std::stoi(valueInstanceTypesInstanceType["TotalEniQueueQuantity"].asString());
		if(!valueInstanceTypesInstanceType["NvmeSupport"].isNull())
			instanceTypesObject.nvmeSupport = valueInstanceTypesInstanceType["NvmeSupport"].asString();
		if(!valueInstanceTypesInstanceType["DiskQuantity"].isNull())
			instanceTypesObject.diskQuantity = std::stoi(valueInstanceTypesInstanceType["DiskQuantity"].asString());
		if(!valueInstanceTypesInstanceType["InitialCredit"].isNull())
			instanceTypesObject.initialCredit = std::stoi(valueInstanceTypesInstanceType["InitialCredit"].asString());
		if(!valueInstanceTypesInstanceType["LocalStorageAmount"].isNull())
			instanceTypesObject.localStorageAmount = std::stoi(valueInstanceTypesInstanceType["LocalStorageAmount"].asString());
		if(!valueInstanceTypesInstanceType["BaselineCredit"].isNull())
			instanceTypesObject.baselineCredit = std::stoi(valueInstanceTypesInstanceType["BaselineCredit"].asString());
		if(!valueInstanceTypesInstanceType["InstancePpsTx"].isNull())
			instanceTypesObject.instancePpsTx = std::stol(valueInstanceTypesInstanceType["InstancePpsTx"].asString());
		if(!valueInstanceTypesInstanceType["EniPrivateIpAddressQuantity"].isNull())
			instanceTypesObject.eniPrivateIpAddressQuantity = std::stoi(valueInstanceTypesInstanceType["EniPrivateIpAddressQuantity"].asString());
		if(!valueInstanceTypesInstanceType["CpuCoreCount"].isNull())
			instanceTypesObject.cpuCoreCount = std::stoi(valueInstanceTypesInstanceType["CpuCoreCount"].asString());
		if(!valueInstanceTypesInstanceType["InstanceTypeFamily"].isNull())
			instanceTypesObject.instanceTypeFamily = valueInstanceTypesInstanceType["InstanceTypeFamily"].asString();
		if(!valueInstanceTypesInstanceType["EniQuantity"].isNull())
			instanceTypesObject.eniQuantity = std::stoi(valueInstanceTypesInstanceType["EniQuantity"].asString());
		if(!valueInstanceTypesInstanceType["EniTrunkSupported"].isNull())
			instanceTypesObject.eniTrunkSupported = valueInstanceTypesInstanceType["EniTrunkSupported"].asString() == "true";
		instanceTypes_.push_back(instanceTypesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeInstanceTypesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeInstanceTypesResult::InstanceType> DescribeInstanceTypesResult::getInstanceTypes()const
{
	return instanceTypes_;
}

