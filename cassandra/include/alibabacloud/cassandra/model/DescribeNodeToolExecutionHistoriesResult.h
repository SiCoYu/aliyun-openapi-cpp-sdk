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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBENODETOOLEXECUTIONHISTORIESRESULT_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBENODETOOLEXECUTIONHISTORIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT DescribeNodeToolExecutionHistoriesResult : public ServiceResult
			{
			public:
				struct History
				{
					long modifyTime;
					std::string dataCenterId;
					bool isEnded;
					std::string command;
					long createTime;
					std::string arguments;
					std::string regionId;
					std::string errorMessage;
					std::string jobId;
					std::string nodes;
				};


				DescribeNodeToolExecutionHistoriesResult();
				explicit DescribeNodeToolExecutionHistoriesResult(const std::string &payload);
				~DescribeNodeToolExecutionHistoriesResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<History> getHistories()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<History> histories_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_DESCRIBENODETOOLEXECUTIONHISTORIESRESULT_H_