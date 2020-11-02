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

#ifndef ALIBABACLOUD_VCS_MODEL_GETMONITORLISTRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_GETMONITORLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT GetMonitorListResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Record
					{
						std::string status;
						std::string taskId;
						std::string description;
						std::string monitorType;
						std::string imageMatch;
						std::string attributes;
						std::string deviceList;
						std::string modifiedDate;
						std::string createDate;
						std::string notifierType;
						std::string ruleExpression;
						std::string algorithmVendor;
						std::string expression;
						std::string ruleName;
						std::string notifierExtra;
					};
					int totalCount;
					int pageSize;
					int totalPage;
					int pageNo;
					std::vector<Record> records;
				};


				GetMonitorListResult();
				explicit GetMonitorListResult(const std::string &payload);
				~GetMonitorListResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETMONITORLISTRESULT_H_