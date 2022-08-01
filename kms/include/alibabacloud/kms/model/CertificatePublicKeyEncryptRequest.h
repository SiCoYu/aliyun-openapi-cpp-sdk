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

#ifndef ALIBABACLOUD_KMS_MODEL_CERTIFICATEPUBLICKEYENCRYPTREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CERTIFICATEPUBLICKEYENCRYPTREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT CertificatePublicKeyEncryptRequest : public RpcServiceRequest {
public:
	CertificatePublicKeyEncryptRequest();
	~CertificatePublicKeyEncryptRequest();
	std::string getCertificateId() const;
	void setCertificateId(const std::string &certificateId);
	std::string getPlaintext() const;
	void setPlaintext(const std::string &plaintext);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);

private:
	std::string certificateId_;
	std::string plaintext_;
	std::string algorithm_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_CERTIFICATEPUBLICKEYENCRYPTREQUEST_H_
