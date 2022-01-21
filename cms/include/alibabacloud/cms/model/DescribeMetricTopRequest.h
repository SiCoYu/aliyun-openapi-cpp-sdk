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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICTOPREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICTOPREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeMetricTopRequest : public RpcServiceRequest {
public:
	DescribeMetricTopRequest();
	~DescribeMetricTopRequest();
	std::string getExpress() const;
	void setExpress(const std::string &express);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getMetricName() const;
	void setMetricName(const std::string &metricName);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getLength() const;
	void setLength(const std::string &length);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOrderby() const;
	void setOrderby(const std::string &orderby);
	std::string getOrderDesc() const;
	void setOrderDesc(const std::string &orderDesc);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getDimensions() const;
	void setDimensions(const std::string &dimensions);

private:
	std::string express_;
	std::string startTime_;
	std::string metricName_;
	std::string period_;
	std::string length_;
	std::string endTime_;
	std::string orderby_;
	std::string orderDesc_;
	std::string _namespace_;
	std::string dimensions_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICTOPREQUEST_H_
