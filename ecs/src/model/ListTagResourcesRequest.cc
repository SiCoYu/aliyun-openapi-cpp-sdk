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

#include <alibabacloud/ecs/model/ListTagResourcesRequest.h>

using AlibabaCloud::Ecs::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ListTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

long ListTagResourcesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListTagResourcesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListTagResourcesRequest::getRegionId()const
{
	return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListTagResourcesRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<ListTagResourcesRequest::Tag> ListTagResourcesRequest::getTag()const
{
	return tag_;
}

void ListTagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::vector<std::string> ListTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

std::string ListTagResourcesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListTagResourcesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListTagResourcesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListTagResourcesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ListTagResourcesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListTagResourcesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<ListTagResourcesRequest::TagFilter> ListTagResourcesRequest::getTagFilter()const
{
	return tagFilter_;
}

void ListTagResourcesRequest::setTagFilter(const std::vector<TagFilter>& tagFilter)
{
	tagFilter_ = tagFilter;
	for(int dep1 = 0; dep1!= tagFilter.size(); dep1++) {
		auto tagFilterObj = tagFilter.at(dep1);
		std::string tagFilterObjStr = "TagFilter." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= tagFilterObj.tagValues.size(); dep2++) {
			setParameter(tagFilterObjStr + ".TagValues."+ std::to_string(dep2), tagFilterObj.tagValues.at(dep2));
		}
		setParameter(tagFilterObjStr + ".TagKey", tagFilterObj.tagKey);
	}
}

std::string ListTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

