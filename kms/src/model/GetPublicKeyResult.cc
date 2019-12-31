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

#include <alibabacloud/kms/model/GetPublicKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

GetPublicKeyResult::GetPublicKeyResult() :
	ServiceResult()
{}

GetPublicKeyResult::GetPublicKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPublicKeyResult::~GetPublicKeyResult()
{}

void GetPublicKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["PublicKey"].isNull())
		publicKey_ = value["PublicKey"].asString();
	if(!value["KeyId"].isNull())
		keyId_ = value["KeyId"].asString();
	if(!value["KeyVersionId"].isNull())
		keyVersionId_ = value["KeyVersionId"].asString();

}

std::string GetPublicKeyResult::getPublicKey()const
{
	return publicKey_;
}

std::string GetPublicKeyResult::getKeyId()const
{
	return keyId_;
}

std::string GetPublicKeyResult::getKeyVersionId()const
{
	return keyVersionId_;
}

