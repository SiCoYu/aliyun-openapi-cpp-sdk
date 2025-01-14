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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBEBENCHMARKTASKRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBEBENCHMARKTASKRESULT_H_

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
			class ALIBABACLOUD_EAS_EXPORT DescribeBenchmarkTaskResult : public ServiceResult
			{
			public:


				DescribeBenchmarkTaskResult();
				explicit DescribeBenchmarkTaskResult(const std::string &payload);
				~DescribeBenchmarkTaskResult();
				std::string getStatus()const;
				long getAvailableAgent()const;
				std::string getTaskId()const;
				std::string getMessage()const;
				std::string getTaskName()const;
				std::string getServiceName()const;
				long getDesiredAgent()const;
				std::string getToken()const;
				std::string getCallerUid()const;
				std::string getParentUid()const;
				std::string getReason()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				long availableAgent_;
				std::string taskId_;
				std::string message_;
				std::string taskName_;
				std::string serviceName_;
				long desiredAgent_;
				std::string token_;
				std::string callerUid_;
				std::string parentUid_;
				std::string reason_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBEBENCHMARKTASKRESULT_H_