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

#include <alibabacloud/iot/model/QueryDeviceGroupTagListRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceGroupTagListRequest;

QueryDeviceGroupTagListRequest::QueryDeviceGroupTagListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceGroupTagList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceGroupTagListRequest::~QueryDeviceGroupTagListRequest()
{}

std::string QueryDeviceGroupTagListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceGroupTagListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceGroupTagListRequest::getGroupType()const
{
	return groupType_;
}

void QueryDeviceGroupTagListRequest::setGroupType(const std::string& groupType)
{
	groupType_ = groupType;
	setParameter("GroupType", groupType);
}

std::string QueryDeviceGroupTagListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceGroupTagListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryDeviceGroupTagListRequest::getGroupId()const
{
	return groupId_;
}

void QueryDeviceGroupTagListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string QueryDeviceGroupTagListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceGroupTagListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceGroupTagListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceGroupTagListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

