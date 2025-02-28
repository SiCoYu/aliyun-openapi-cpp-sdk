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

#ifndef ALIBABACLOUD_OOS_MODEL_GETPARAMETERSBYPATHRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_GETPARAMETERSBYPATHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT GetParametersByPathResult : public ServiceResult
			{
			public:
				struct _Parameter
				{
					std::string updatedBy;
					std::string type;
					std::string description;
					std::string constraints;
					std::string createdBy;
					std::string updatedDate;
					int parameterVersion;
					std::string value;
					std::string createdDate;
					std::string id;
					std::string name;
					std::string shareType;
				};


				GetParametersByPathResult();
				explicit GetParametersByPathResult(const std::string &payload);
				~GetParametersByPathResult();
				int getTotalCount()const;
				std::vector<_Parameter> getParameters()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<_Parameter> parameters_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_GETPARAMETERSBYPATHRESULT_H_