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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEEXPOSEDSTATISTICSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEEXPOSEDSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeExposedStatisticsResult : public ServiceResult
			{
			public:


				DescribeExposedStatisticsResult();
				explicit DescribeExposedStatisticsResult(const std::string &payload);
				~DescribeExposedStatisticsResult();
				int getExposedPortCount()const;
				int getExposedWeekPasswordMachineCount()const;
				int getExposedInstanceCount()const;
				int getGatewayAssetCount()const;
				int getExposedLaterVulCount()const;
				int getExposedComponentCount()const;
				int getExposedIpCount()const;
				int getExposedNntfVulCount()const;
				int getExposedAsapVulCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int exposedPortCount_;
				int exposedWeekPasswordMachineCount_;
				int exposedInstanceCount_;
				int gatewayAssetCount_;
				int exposedLaterVulCount_;
				int exposedComponentCount_;
				int exposedIpCount_;
				int exposedNntfVulCount_;
				int exposedAsapVulCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEEXPOSEDSTATISTICSRESULT_H_