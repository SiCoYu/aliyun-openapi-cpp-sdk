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

#ifndef ALIBABACLOUD_ENS_MODEL_ASSOCIATEENSEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_ASSOCIATEENSEIPADDRESSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT AssociateEnsEipAddressRequest : public RpcServiceRequest {
public:
	AssociateEnsEipAddressRequest();
	~AssociateEnsEipAddressRequest();
	std::string getAllocationId() const;
	void setAllocationId(const std::string &allocationId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string allocationId_;
	std::string instanceType_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_ASSOCIATEENSEIPADDRESSREQUEST_H_
