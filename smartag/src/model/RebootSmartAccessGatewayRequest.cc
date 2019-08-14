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

#include <alibabacloud/smartag/model/RebootSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::RebootSmartAccessGatewayRequest;

RebootSmartAccessGatewayRequest::RebootSmartAccessGatewayRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "RebootSmartAccessGateway")
{}

RebootSmartAccessGatewayRequest::~RebootSmartAccessGatewayRequest()
{}

long RebootSmartAccessGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RebootSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RebootSmartAccessGatewayRequest::getSerialNumber()const
{
	return serialNumber_;
}

void RebootSmartAccessGatewayRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", serialNumber);
}

std::string RebootSmartAccessGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RebootSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RebootSmartAccessGatewayRequest::getRegionId()const
{
	return regionId_;
}

void RebootSmartAccessGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RebootSmartAccessGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RebootSmartAccessGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RebootSmartAccessGatewayRequest::getSmartAGId()const
{
	return smartAGId_;
}

void RebootSmartAccessGatewayRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long RebootSmartAccessGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void RebootSmartAccessGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

