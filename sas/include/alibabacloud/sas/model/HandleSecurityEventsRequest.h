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

#ifndef ALIBABACLOUD_SAS_MODEL_HANDLESECURITYEVENTSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_HANDLESECURITYEVENTSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT HandleSecurityEventsRequest : public RpcServiceRequest {
public:
	HandleSecurityEventsRequest();
	~HandleSecurityEventsRequest();
	std::string getMarkMissParam() const;
	void setMarkMissParam(const std::string &markMissParam);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getSecurityEventIds() const;
	void setSecurityEventIds(const std::vector<std::string> &securityEventIds);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getOperationCode() const;
	void setOperationCode(const std::string &operationCode);
	std::string getOperationParams() const;
	void setOperationParams(const std::string &operationParams);
	std::string getMarkBatch() const;
	void setMarkBatch(const std::string &markBatch);

private:
	std::string markMissParam_;
	long resourceOwnerId_;
	std::vector<std::string> securityEventIds_;
	std::string sourceIp_;
	std::string operationCode_;
	std::string operationParams_;
	std::string markBatch_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_HANDLESECURITYEVENTSREQUEST_H_
