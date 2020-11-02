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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEPAYASYOUGOPRICERESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEPAYASYOUGOPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribePayAsYouGoPriceResult : public ServiceResult
			{
			public:


				DescribePayAsYouGoPriceResult();
				explicit DescribePayAsYouGoPriceResult(const std::string &payload);
				~DescribePayAsYouGoPriceResult();
				std::string getMessage()const;
				std::string getCurrency()const;
				float getGatewayClassPrice()const;
				float getCacheCloudEfficiencySizePrice()const;
				std::string getCode()const;
				bool getSuccess()const;
				float getCacheCloudSSDSizePrice()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string currency_;
				float gatewayClassPrice_;
				float cacheCloudEfficiencySizePrice_;
				std::string code_;
				bool success_;
				float cacheCloudSSDSizePrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEPAYASYOUGOPRICERESULT_H_