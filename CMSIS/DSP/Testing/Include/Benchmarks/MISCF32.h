#include "Test.h"
#include "Pattern.h"
class MISCF32:public Client::Suite
    {
        public:
            MISCF32(Testing::testID_t id);
            void setUp(Testing::testID_t,std::vector<Testing::param_t>& params,Client::PatternMgr *mgr);
            void tearDown(Testing::testID_t,Client::PatternMgr *mgr);
        private:
            #include "MISCF32_decl.h"
            Client::Pattern<float32_t> input1;
            Client::Pattern<float32_t> input2;
            Client::LocalPattern<float32_t> output;

            int nba;
            int nbb;

            const float32_t *inp1;
            const float32_t *inp2;
            float32_t *outp;
            
    };