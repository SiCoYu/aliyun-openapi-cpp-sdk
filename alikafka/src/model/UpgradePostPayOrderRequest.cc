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

#include <alibabacloud/alikafka/model/UpgradePostPayOrderRequest.h>

using AlibabaCloud::Alikafka::Model::UpgradePostPayOrderRequest;

UpgradePostPayOrderRequest::UpgradePostPayOrderRequest() :
	RpcServiceRequest("alikafka", "2019-09-16", "UpgradePostPayOrder")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradePostPayOrderRequest::~UpgradePostPayOrderRequest()
{}

int UpgradePostPayOrderRequest::getDiskSize()const
{
	return diskSize_;
}

void UpgradePostPayOrderRequest::setDiskSize(int diskSize)
{
	diskSize_ = diskSize;
	setParameter("DiskSize", std::to_string(diskSize));
}

int UpgradePostPayOrderRequest::getIoMax()const
{
	return ioMax_;
}

void UpgradePostPayOrderRequest::setIoMax(int ioMax)
{
	ioMax_ = ioMax;
	setParameter("IoMax", std::to_string(ioMax));
}

std::string UpgradePostPayOrderRequest::getIoMaxSpec()const
{
	return ioMaxSpec_;
}

void UpgradePostPayOrderRequest::setIoMaxSpec(const std::string& ioMaxSpec)
{
	ioMaxSpec_ = ioMaxSpec;
	setParameter("IoMaxSpec", ioMaxSpec);
}

int UpgradePostPayOrderRequest::getTopicQuota()const
{
	return topicQuota_;
}

void UpgradePostPayOrderRequest::setTopicQuota(int topicQuota)
{
	topicQuota_ = topicQuota;
	setParameter("TopicQuota", std::to_string(topicQuota));
}

int UpgradePostPayOrderRequest::getEipMax()const
{
	return eipMax_;
}

void UpgradePostPayOrderRequest::setEipMax(int eipMax)
{
	eipMax_ = eipMax;
	setParameter("EipMax", std::to_string(eipMax));
}

std::string UpgradePostPayOrderRequest::getSpecType()const
{
	return specType_;
}

void UpgradePostPayOrderRequest::setSpecType(const std::string& specType)
{
	specType_ = specType;
	setParameter("SpecType", specType);
}

std::string UpgradePostPayOrderRequest::getInstanceId()const
{
	return instanceId_;
}

void UpgradePostPayOrderRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpgradePostPayOrderRequest::getRegionId()const
{
	return regionId_;
}

void UpgradePostPayOrderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

