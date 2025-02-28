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

#ifndef ALIBABACLOUD_KMS_MODEL_ASYMMETRICSIGNREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_ASYMMETRICSIGNREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT AsymmetricSignRequest : public RpcServiceRequest {
public:
	AsymmetricSignRequest();
	~AsymmetricSignRequest();
	std::string getKeyVersionId() const;
	void setKeyVersionId(const std::string &keyVersionId);
	std::string getDigest() const;
	void setDigest(const std::string &digest);
	std::string getKeyId() const;
	void setKeyId(const std::string &keyId);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);

private:
	std::string keyVersionId_;
	std::string digest_;
	std::string keyId_;
	std::string algorithm_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_ASYMMETRICSIGNREQUEST_H_
