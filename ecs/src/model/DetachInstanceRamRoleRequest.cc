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

#include <alibabacloud/ecs/model/DetachInstanceRamRoleRequest.h>

using AlibabaCloud::Ecs::Model::DetachInstanceRamRoleRequest;

DetachInstanceRamRoleRequest::DetachInstanceRamRoleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DetachInstanceRamRole")
{
	setMethod(HttpRequest::Method::Post);
}

DetachInstanceRamRoleRequest::~DetachInstanceRamRoleRequest()
{}

long DetachInstanceRamRoleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachInstanceRamRoleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachInstanceRamRoleRequest::getRegionId()const
{
	return regionId_;
}

void DetachInstanceRamRoleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DetachInstanceRamRoleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachInstanceRamRoleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachInstanceRamRoleRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void DetachInstanceRamRoleRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setParameter("RamRoleName", ramRoleName);
}

long DetachInstanceRamRoleRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachInstanceRamRoleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DetachInstanceRamRoleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DetachInstanceRamRoleRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

