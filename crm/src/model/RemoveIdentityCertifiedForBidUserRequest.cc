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

#include <alibabacloud/crm/model/RemoveIdentityCertifiedForBidUserRequest.h>

using AlibabaCloud::Crm::Model::RemoveIdentityCertifiedForBidUserRequest;

RemoveIdentityCertifiedForBidUserRequest::RemoveIdentityCertifiedForBidUserRequest() :
	RpcServiceRequest("crm", "2015-04-08", "RemoveIdentityCertifiedForBidUser")
{}

RemoveIdentityCertifiedForBidUserRequest::~RemoveIdentityCertifiedForBidUserRequest()
{}

std::string RemoveIdentityCertifiedForBidUserRequest::getBidType()const
{
	return bidType_;
}

void RemoveIdentityCertifiedForBidUserRequest::setBidType(const std::string& bidType)
{
	bidType_ = bidType;
	setCoreParameter("BidType", bidType);
}

std::string RemoveIdentityCertifiedForBidUserRequest::getPK()const
{
	return pK_;
}

void RemoveIdentityCertifiedForBidUserRequest::setPK(const std::string& pK)
{
	pK_ = pK;
	setCoreParameter("PK", pK);
}

