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

#include <alibabacloud/vs/model/BatchStartDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

BatchStartDevicesResult::BatchStartDevicesResult() :
	ServiceResult()
{}

BatchStartDevicesResult::BatchStartDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchStartDevicesResult::~BatchStartDevicesResult()
{}

void BatchStartDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["Id"].isNull())
			resultsObject.id = valueResultsResult["Id"].asString();
		auto allStreamsNode = valueResultsResult["Streams"]["Stream"];
		for (auto valueResultsResultStreamsStream : allStreamsNode)
		{
			Result::Stream streamsObject;
			if(!valueResultsResultStreamsStream["Id"].isNull())
				streamsObject.id = valueResultsResultStreamsStream["Id"].asString();
			if(!valueResultsResultStreamsStream["Name"].isNull())
				streamsObject.name = valueResultsResultStreamsStream["Name"].asString();
			if(!valueResultsResultStreamsStream["Error"].isNull())
				streamsObject.error = valueResultsResultStreamsStream["Error"].asString();
			resultsObject.streams.push_back(streamsObject);
		}
		results_.push_back(resultsObject);
	}

}

std::vector<BatchStartDevicesResult::Result> BatchStartDevicesResult::getResults()const
{
	return results_;
}

