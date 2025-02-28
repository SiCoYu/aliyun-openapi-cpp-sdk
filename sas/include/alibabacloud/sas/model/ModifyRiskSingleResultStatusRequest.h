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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYRISKSINGLERESULTSTATUSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYRISKSINGLERESULTSTATUSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyRiskSingleResultStatusRequest : public RpcServiceRequest {
public:
	ModifyRiskSingleResultStatusRequest();
	~ModifyRiskSingleResultStatusRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<std::string> getIds() const;
	void setIds(const std::vector<std::string> &ids);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getTaskId() const;
	void setTaskId(long taskId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string sourceIp_;
	std::vector<std::string> ids_;
	std::string lang_;
	long taskId_;
	std::string status_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYRISKSINGLERESULTSTATUSREQUEST_H_
