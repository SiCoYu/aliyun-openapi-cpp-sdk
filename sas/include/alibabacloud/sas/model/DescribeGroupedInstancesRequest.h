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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDINSTANCESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDINSTANCESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeGroupedInstancesRequest : public RpcServiceRequest {
public:
	DescribeGroupedInstancesRequest();
	~DescribeGroupedInstancesRequest();
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getGroupField() const;
	void setGroupField(const std::string &groupField);
	bool getNoPage() const;
	void setNoPage(bool noPage);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getFieldValue() const;
	void setFieldValue(const std::string &fieldValue);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getMachineTypes() const;
	void setMachineTypes(const std::string &machineTypes);

private:
	std::string criteria_;
	std::string sourceIp_;
	std::string groupField_;
	bool noPage_;
	int pageSize_;
	std::string lang_;
	std::string fieldValue_;
	int currentPage_;
	std::string machineTypes_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDINSTANCESREQUEST_H_
