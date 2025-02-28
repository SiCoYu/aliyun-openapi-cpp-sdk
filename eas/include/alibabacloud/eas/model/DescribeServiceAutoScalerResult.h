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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICEAUTOSCALERRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICEAUTOSCALERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DescribeServiceAutoScalerResult : public ServiceResult
			{
			public:


				DescribeServiceAutoScalerResult();
				explicit DescribeServiceAutoScalerResult(const std::string &payload);
				~DescribeServiceAutoScalerResult();
				int getMaxReplica()const;
				std::string getServiceName()const;
				std::string getStrategies()const;
				int getMinReplica()const;
				std::string getCurrentValues()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxReplica_;
				std::string serviceName_;
				std::string strategies_;
				int minReplica_;
				std::string currentValues_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICEAUTOSCALERRESULT_H_