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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYOPENLOGSHIPPERREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYOPENLOGSHIPPERREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyOpenLogShipperRequest : public RpcServiceRequest {
public:
	struct LogMetaList {
		int hotTtl;
		int ttl;
		std::string configLogStore;
		std::string status;
	};
	ModifyOpenLogShipperRequest();
	~ModifyOpenLogShipperRequest();
	std::vector<LogMetaList> getLogMetaList() const;
	void setLogMetaList(const std::vector<LogMetaList> &logMetaList);
	int getTtl() const;
	void setTtl(int ttl);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getHotTtl() const;
	void setHotTtl(int hotTtl);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTargetRegionId() const;
	void setTargetRegionId(const std::string &targetRegionId);

private:
	std::vector<LogMetaList> logMetaList_;
	int ttl_;
	std::string sourceIp_;
	int hotTtl_;
	std::string from_;
	std::string targetRegionId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYOPENLOGSHIPPERREQUEST_H_
