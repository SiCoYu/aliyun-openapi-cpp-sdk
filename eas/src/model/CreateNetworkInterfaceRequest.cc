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

#include <alibabacloud/eas/model/CreateNetworkInterfaceRequest.h>

using AlibabaCloud::Eas::Model::CreateNetworkInterfaceRequest;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest() :
	RoaServiceRequest("eas", "2018-05-22")
{
	setResourcePath("/api/resources/[cluster_id]/[resource_name]/network");
	setMethod(HttpRequest::Method::POST);
}

CreateNetworkInterfaceRequest::~CreateNetworkInterfaceRequest()
{}

std::string CreateNetworkInterfaceRequest::getCluster_id()const
{
	return cluster_id_;
}

void CreateNetworkInterfaceRequest::setCluster_id(const std::string& cluster_id)
{
	cluster_id_ = cluster_id;
	setParameter("Cluster_id", cluster_id);
}

std::string CreateNetworkInterfaceRequest::getResource_name()const
{
	return resource_name_;
}

void CreateNetworkInterfaceRequest::setResource_name(const std::string& resource_name)
{
	resource_name_ = resource_name;
	setParameter("Resource_name", resource_name);
}

