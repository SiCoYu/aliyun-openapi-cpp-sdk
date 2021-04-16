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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_DESCRIBEAPPRESULT_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_DESCRIBEAPPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT DescribeAppResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Quota
					{
						int docSize;
						int qps;
						int computeResource;
						std::string spec;
					};
					struct Domain
					{
						struct Functions
						{
							std::vector<std::string> service;
							std::vector<std::string> algo;
							std::vector<std::string> qp;
						};
						std::string category;
						Functions functions;
						std::string name;
					};
					std::string status;
					std::string description;
					std::string schema;
					bool autoSwitch;
					int progressPercent;
					int created;
					std::string type;
					Quota quota;
					std::vector<std::string> fetchFields;
					std::string clusterName;
					std::string id;
					int algoDeploymentId;
					Domain domain;
				};


				DescribeAppResult();
				explicit DescribeAppResult(const std::string &payload);
				~DescribeAppResult();
				std::string getRequestId()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_DESCRIBEAPPRESULT_H_