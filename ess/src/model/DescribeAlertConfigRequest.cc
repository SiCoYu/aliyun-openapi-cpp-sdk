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

#include <alibabacloud/ess/model/DescribeAlertConfigRequest.h>

using AlibabaCloud::Ess::Model::DescribeAlertConfigRequest;

DescribeAlertConfigRequest::DescribeAlertConfigRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeAlertConfig")
{}

DescribeAlertConfigRequest::~DescribeAlertConfigRequest()
{}

std::string DescribeAlertConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAlertConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAlertConfigRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DescribeAlertConfigRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

long DescribeAlertConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAlertConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAlertConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAlertConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

