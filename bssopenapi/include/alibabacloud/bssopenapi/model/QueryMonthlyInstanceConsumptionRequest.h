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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYMONTHLYINSTANCECONSUMPTIONREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYMONTHLYINSTANCECONSUMPTIONREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryMonthlyInstanceConsumptionRequest : public RpcServiceRequest {
public:
	QueryMonthlyInstanceConsumptionRequest();
	~QueryMonthlyInstanceConsumptionRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getSubscriptionType() const;
	void setSubscriptionType(const std::string &subscriptionType);
	std::string getBillingCycle() const;
	void setBillingCycle(const std::string &billingCycle);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string productCode_;
	std::string subscriptionType_;
	std::string billingCycle_;
	long ownerId_;
	int pageNum_;
	std::string productType_;
	int pageSize_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYMONTHLYINSTANCECONSUMPTIONREQUEST_H_
