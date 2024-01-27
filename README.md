# IRC (Internet Relay Chat)의 도입 배경

IRC는 1980년대 후반에 핀란드의 Oulu 대학교에서 시작되었습니다. 이 시스템은 Jarkko Oikarinen이라는 학생에 의해 개발되었으며, 그의 목표는 기존의 BBS (Bulletin Board System)와 유사한 시스템을 네트워크 상에서 실시간으로 통신할 수 있도록 하는 것이었습니다.

IRC는 실시간으로 메시지를 주고받을 수 있는 간단하면서도 효과적인 통신 수단을 제공했으며, 이는 당시 컴퓨터 네트워크 사용자들 사이에서 빠르게 인기를 얻었습니다. 이후 IRC는 인터넷 커뮤니케이션의 주요 수단 중 하나로 자리 잡게 되었습니다. 이 플랫폼은 여러 커뮤니티와 그룹 간의 실시간 대화를 가능하게 하는 중요한 도구가 되었습니다.

# 소켓

소켓은 네트워크 프로그래밍에서 중요한 개념입니다. 이것은 컴퓨터 네트워크 통신을 위한 인터페이스를 제공하며, 네트워크 통신을 위한 '플러그'와 '소켓'으로 비유할 수 있습니다. 소켓은 응용 프로그램이 네트워크를 통해 데이터를 송수신할 수 있는 수단을 제공합니다.

### OSI 모델과 소켓

OSI 참조 모델에서 소켓은 전송 계층(4계층)에 해당합니다. 이 계층은 네트워크에서 데이터 전송의 신뢰성을 담당하며, 소켓은 이를 추상화하여 프로그래머가 쉽게 네트워크 통신을 구현할 수 있도록 합니다.

### 소켓의 역할

소켓은 네트워크의 복잡한 세부 사항을 숨기고, 데이터의 송수신에만 집중할 수 있도록 해줍니다. 이는 프로그래머가 네트워크 프로토콜의 내부 작동 방식을 자세히 알 필요 없이 통신 기능을 구현할 수 있게 해줍니다.

### 소켓의 중요성

소켓의 중요성은 그것이 제공하는 추상화 수준에 있습니다. 네트워크 계층(3계층)까지의 복잡한 처리를 추상화함으로써, 개발자는 네트워크의 특정 세부 사항에 신경 쓰지 않고도 데이터 전송과 수신 로직에 집중할 수 있습니다.

# OSI 모델과 소켓 프로그래밍 및 IRC 프로토콜의 상호작용

OSI 모델은 네트워크 통신을 이해하는 데 중요한 참조 모델입니다. 이 모델은 데이터 통신을 7개의 계층으로 나눕니다. 소켓 프로그래밍과 IRC 프로토콜은 이 모델의 상위 계층에서 상호작용합니다.

### 소켓 프로그래밍과 OSI 모델
- **전송 계층 (4계층)**: 소켓은 이 계층에서 데이터의 신뢰성 있는 전송을 책임집니다. TCP/IP 프로토콜은 이 계층에서 구현됩니다.
- **세션 계층 (5계층)**: 소켓 프로그래밍은 세션 관리를 통해 서버와 클라이언트 간의 지속적인 연결을 구축합니다.

### IRC 프로토콜과 OSI 모델
- **표현 계층 (6계층)**: IRC 프로토콜은 데이터 표현 및 인코딩 방법을 다룹니다.
- **응용 계층 (7계층)**: 실제 IRC 서버 및 클라이언트의 응용 프로그램 로직이 구현되는 부분입니다. 명령어 처리, 채널 관리 등이 여기에 해당합니다.

이러한 계층들을 이해함으로써, 소켓 프로그래밍과 IRC 프로토콜 구현의 전체 구조를 더 잘 파악할 수 있습니다.


# 소켓 프로그래밍 (OSI 4~5 계층)

## 소켓의 기본 개념

### 소켓이란?

소켓은 네트워크상에서 서로 다른 시스템 간의 통신을 가능하게 하는 인터페이스입니다. 데이터를 교환하기 위한 두 프로그램 사이의 논리적 연결점으로, 네트워크 통신의 근간을 이룹니다. 

### 소켓의 역할

- **통신의 추상화**: 소켓은 네트워크 계층의 복잡성을 추상화하여, 개발자가 TCP/IP와 같은 하위 네트워크 프로토콜을 직접 다루지 않고도 통신 기능을 구현할 수 있도록 합니다.
- **데이터 교환**: 소켓을 통해 데이터는 스트림(연속된 바이트) 형태로 전송됩니다. 이를 통해 서버와 클라이언트는 정보를 주고받을 수 있습니다.

### 소켓의 사용

소켓 프로그래밍은 주로 클라이언트-서버 아키텍처에서 사용됩니다. 클라이언트는 서버에 연결을 요청하고, 서버는 이 요청을 받아들여 통신을 시작합니다. 이 과정에서 소켓은 두 단말 간의 다리 역할을 합니다.

### 중요성

소켓의 중요성은 네트워크 통신의 복잡한 부분을 캡슐화하고 개발자에게 친숙한 인터페이스를 제공한다는 데 있습니다. 이를 통해, 개발자는 네트워크 통신의 세부 사항에 대한 깊은 이해 없이도, 신뢰성 있는 데이터 교환 방법을 쉽게 구현할 수 있습니다.

## 소켓 타입과 프로토콜

소켓 프로그래밍에는 주로 두 가지 유형의 소켓이 사용됩니다: TCP 소켓과 UDP 소켓. 이들 각각은 특정 목적과 환경에 적합한 독특한 특성을 가지고 있습니다.

### TCP 소켓
- **연결 지향적**: TCP는 신뢰할 수 있는 연결 기반의 통신을 제공합니다. 클라이언트와 서버 간에는 연결 설정 과정이 필요합니다.
- **데이터 무결성 및 순서 보장**: 전송된 데이터의 순서와 무결성을 보장합니다.
- **사용 사례**: 웹 브라우저, 이메일 클라이언트, 대부분의 웹 애플리케이션 등.

### UDP 소켓
- **비연결 지향적**: UDP는 연결 설정 없이 데이터를 보내는 프로토콜입니다. 이는 TCP보다 빠르지만 덜 신뢰성 있습니다.
- **경량 프로토콜**: 오버헤드가 적어 속도가 빠릅니다.
- **사용 사례**: 스트리밍 서비스, 온라인 게임, VoIP(Voice over IP) 등.

### 결론적 사용 선택
- **신뢰성과 데이터 순서가 중요한 경우**: TCP 소켓을 사용합니다. 연결의 신뢰성과 데이터의 순서 및 무결성이 필요한 애플리케이션에 적합합니다.
- **속도와 효율성이 더 중요한 경우**: UDP 소켓을 사용합니다. 오버헤드가 적고 신속한 데이터 전송이 필요한 상황에 적합합니다.

## 소켓 프로그래밍의 기본 단계

### 1. 소켓 생성 (socket())
- **목적**: 네트워크 통신을 위한 소켓을 생성합니다.
- **사용법**: `socket()` 함수는 통신 타입(TCP/UDP)과 프로토콜을 지정하여 호출합니다.
- **서버 vs 클라이언트**: 서버와 클라이언트 모두 초기 통신 점을 생성하기 위해 이 함수를 사용합니다.

### 2. 주소 바인딩 (bind())
- **목적**: 소켓에 서버의 IP 주소와 포트 번호를 할당합니다.
- **사용법**: `bind()` 함수는 소켓, IP 주소, 포트 번호를 인자로 받아 서버 소켓을 네트워크 주소에 연결합니다.

### 3. 연결 수립 (listen()과 accept())
- **listen()**: 서버가 클라이언트의 연결 요청을 기다리도록 설정합니다.
- **accept()**: 실제 클라이언트 연결을 수락하고 새로운 소켓을 통해 통신합니다.

### 4. 클라이언트 연결 시도 (connect())
- **목적**: 클라이언트가 서버에 연결을 시도합니다.
- **사용법**: `connect()` 함수는 서버의 주소와 포트 번호를 인자로 사용하여 서버에 연결을 시도합니다.

### 5. 데이터 송수신 (send()와 recv())
- **send()**: 데이터를 네트워크를 통해 보냅니다.
- **recv()**: 네트워크로부터 데이터를 수신합니다.

### 6. 소켓 종료 (close() 또는 shutdown())
- **목적**: 연결을 종료하고 소켓 자원을 해제합니다.
- **사용법**: `close()` 또는 `shutdown()` 함수를 사용하여 소켓을 닫습니다.

```css
서버 작업:                                   클라이언트 작업:
socket(): 소켓 생성                          socket(): 소켓 생성
   ↓                                            ↓
bind(): IP 및 포트 바인딩                           ↓
   ↓                                            ↓
listen(): 연결 대기 상태                            ↓
   ↓                                            ↓
accept() <------------- 연결 요청 ------------ connect(): 서버 연결 시도
   ↓                                            ↓
recv() <--------------- 데이터 받기 ----------- send(): 데이터 전송
   ↓                                            ↓
send() --------------- 데이터 전송 ----------> recv(): 데이터 수신
   ↓                                            ↓
close(): 소켓 종료                             close(): 소켓 종료
```

## 주요 소켓 함수

### socket() 함수

- **설명**: 네트워크 통신을 위한 새로운 소켓을 생성합니다.
- **사용법**: `socket()` 함수는 통신 타입(TCP/UDP)과 프로토콜을 지정하여 호출합니다.
- **예시**:
  ```
  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  ```
- **코드 설명**: `sockfd`는 새로 생성된 소켓의 파일 디스크립터입니다. `AF_INET`은 IPv4 인터넷 프로토콜을 나타내며, `SOCK_STREAM`은 TCP 연결 방식을 지정합니다. 마지막 인자 `0`은 기본 프로토콜을 선택합니다.
- **주의점**: 소켓 생성에 실패하면 `-1`을 반환하므로, 에러 처리 로직이 필요합니다.
- **필요한 헤더**:
  ```c
  #include <sys/types.h>
  #include <sys/socket.h>
  ```
### bind() 함수

- **설명**: 서버의 IP 주소와 포트 번호를 소켓에 연결합니다.
- **사용법**: `bind()` 함수는 소켓 식별자, 주소 구조체, 주소 길이를 인자로 사용합니다.
- **예시**:
  ```
  struct sockaddr_in addr;
  addr.sin_family = AF_INET;
  addr.sin_port = htons(8080);
  addr.sin_addr.s_addr = INADDR_ANY;
  bind(sockfd, (struct sockaddr *)&addr, sizeof(addr));
  ```
- **코드 설명**: `sockaddr_in` 구조체는 인터넷 주소를 저장합니다. `htons()` 함수는 호스트 바이트 순서를 네트워크 바이트 순서로 변환합니다. `INADDR_ANY`는 모든 인터페이스를 통해 들어오는 연결을 수락합니다.
- **주의점**: 바인딩에 실패하면 `-1`을 반환합니다. 주소 충돌이나 권한 문제에 주의하세요.
- **필요한 헤더**:
  ```c
  #include <sys/socket.h>
  #include <netinet/in.h>
  ```

### listen() 함수

- **설명**: 서버가 클라이언트의 연결 요청을 수신할 준비를 합니다.
- **사용법**: `listen()` 함수는 소켓 식별자와 대기열 크기를 인자로 사용합니다.
- **예시**:
  ```
  listen(sockfd, 5);
  ```
- **코드 설명**: 여기서 `5`는 대기 중인 연결 요청의 최대 수를 나타냅니다.
- **주의점**: 대기열 크기가 너무 작으면 일부 연결 요청이 누락될 수 있습니다.
- **필요한 헤더**:
  ```c
  #include <sys/socket.h>
  ```

### accept() 함수

- **설명**: 클라이언트의 연결 요청을 수락하고 새로운 소켓을 생성합니다.
- **사용법**: `accept()` 함수는 서버 소켓, 주소 구조체, 주소 길이를 인자로 사용합니다.
- **예시**:
  ```
  int new_sock = accept(sockfd, (struct sockaddr *)&client_addr, &addrlen);
  ```
- **코드 설명**: `accept()`는 연결된 클라이언트의 새로운 소켓 식별자를 반환합니다.
- **주의점**: `accept()` 함수는 블로킹 함수이므로, 연결이 수립될 때까지 기다립니다.
- **필요한 헤더**:
  ```c
  #include <sys/socket.h>
  #include <netinet/in.h>
  ```

### connect() 함수

- **설명**: 클라이언트가 서버에 연결을 시도합니다.
- **사용법**: `connect()` 함수는 클라이언트 소켓 식별자, 서버 주소 구조체, 주소 길이를 인자로 사용합니다.
- **예시**:
  ```
  connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  ```
- **코드 설명**: `sockaddr` 구조체는 서버의 주소 정보를 담고 있습니다. 이 함수는 클라이언트가 서버에 연결하기 위해 사용됩니다.
- **주의점**: 연결 실패 시 `-1`을 반환합니다. 서버 주소와 포트 번호가 정확한지 확인하세요.
- **필요한 헤더**:
  ```c
  #include <sys/socket.h>
  #include <netinet/in.h>
  ```

### send()와 recv() 함수

- **설명**: `send()`는 데이터를 서버에 보내고, `recv()`는 서버로부터 데이터를 받습니다.
- **사용법**: `send()`와 `recv()` 함수는 소켓 식별자, 메시지 버퍼, 버퍼 크기, 플래그를 인자로 사용합니다.
- **예시**:
  ```
  send(sockfd, message, strlen(message), 0);
  recv(sockfd, buffer, sizeof(buffer), 0);
  ```
- **코드 설명**: `send()`에서 `message`는 전송할 데이터를 담고 있으며, `recv()`에서 `buffer`는 수신 데이터를 저장합니다.
- **주의점**: 네트워크 지연 또는 오류로 인해 메시지 전송 또는 수신이 실패할 수 있습니다.
- **필요한 헤더**:
  ```c
  #include <sys/socket.h>
  ```

### close() 함수

- **설명**: 연결된 소켓을 닫고 리소스를 해제합니다.
- **사용법**: `close()` 함수는 소켓 식별자를 인자로 사용합니다.
- **예시**:
  ```
  close(sockfd);
  ```
- **코드 설명**: 이 함수는 소켓 연결을 종료하고, 연결에 사용된 시스템 리소스를 해제합니다.
- **주의점**: 모든 통신이 완료된 후 소켓을 닫아야 합니다.
- **필요한 헤더**:
  ```c
  #include <unistd.h>
  ```

### setsockopt() 함수
- **설명**: 소켓의 옵션을 설정합니다.
- **사용법**: `setsockopt()` 함수는 소켓 식별자, 옵션을 설정할 레벨, 옵션 이름, 옵션 값, 옵션 크기를 인자로 사용합니다.
- **예시**:
  ```c
  int opt = 1;
  setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
  ```
- **코드 설명**: 이 예시에서는 `SO_REUSEADDR` 옵션을 사용하여, 같은 주소를 재사용할 수 있도록 설정합니다.
- **주의점**: 올바르지 않은 옵션을 사용하면 에러가 발생할 수 있습니다.
- **필요한 헤더**:
  ```c
  #include <sys/types.h>
  #include <sys/socket.h>
  ```

### getsockname() 함수
- **설명**: 소켓에 바인딩된 주소를 가져옵니다.
- **사용법**: `getsockname()` 함수는 소켓 식별자, 주소 정보를 저장할 구조체, 구조체 크기의 포인터를 인자로 사용합니다.
- **예시**:
  ```c
  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  getsockname(sockfd, (struct sockaddr *)&addr, &len);
  ```
- **코드 설명**: 이 함수는 `sockfd` 소켓에 연결된 주소 정보를 `addr` 구조체에 저장합니다.
- **주의점**: 소켓이 올바르게 바인딩되지 않았다면, 정확한 정보를 얻을 수 없습니다.
- **필요한 헤더**:
  ```c
  #include <sys/socket.h>
  #include <netinet/in.h>
  ```

### getprotobyname() 함수
- **설명**: 지정된 프로토콜 이름에 대한 프로토콜 정보를 가져옵니다.
- **사용법**: `getprotobyname()` 함수는 프로토콜 이름을 문자열로 받습니다.
- **예시**:
  ```c
  struct protoent *proto;
  proto = getprotobyname("tcp");
  ```
- **코드 설명**: 이 예시에서는 TCP 프로토콜에 대한 정보를 `proto` 구조체에 저장합니다.
- **주의점**: 지원하지 않는 프로토콜 이름을 사용하면 NULL을 반환합니다.
- **필요한 헤더**:
  ```c
  #include <netdb.h>
  ```

### getaddrinfo() 함수
- **설명**: 호스트 이름과 서비스 이름에 대한 주소 정보를 제공합니다.
- **사용법**: `getaddrinfo()`는 호스트 이름, 서비스 이름, 주소 정보를 위한 힌트 구조체, 결과를 저장할 구조체 포인터를 인자로 사용합니다.
- **예시**:
  ```c
  struct addrinfo hints, *res;
  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_INET;
  hints.ai_socktype = SOCK_STREAM;
  getaddrinfo("example.com", "http", &hints, &res);
  ```
- **코드 설명**: `example.com`의 IP 주소와 `http` 서비스에 해당하는 포트 번호를 가져옵니다.
- **주의점**: 메모리 누수를 방지하기 위해 `freeaddrinfo()`로 메모리를 해제해야 합니다.
- **필요한 헤더**:
  ```c
  #include <sys/types.h>
  #include <sys/socket.h>
  #include <netdb.h>
  ```

### freeaddrinfo() 함수
- **설명**: `getaddrinfo()`에 의해 할당된 메모리를 해제합니다.
- **사용법**: `freeaddrinfo()`는 `getaddrinfo()`에 의해 반환된 구조체 포인터를 인자로 사용합니다.
- **예시**:
  ```c
  freeaddrinfo(res);
  ```
- **코드 설명**: `res` 포인터에 할당된 모든 동적 메모리를 해제합니다.
- **필요한 헤더**:
  ```c
  #include <netdb.h>
  ```

### htons, htonl, ntohs, ntohl 함수
- **설명**: 이 함수들은 호스트 바이트 순서를 네트워크 바이트 순서로 변환합니다(`htons`, `htonl`) 또는 그 반대로 변환합니다(`ntohs`, `ntohl`).
- **사용법**: 주로 포트 번호나 IP 주소를 네트워크 바이트 순서로 변환할 때 사용합니다.
- **예시**:
  ```c
  uint16_t port = htons(8080);
  uint32_t addr = htonl(0xC0A80001); // 192.168.0.1
  ```
- **코드 설명**: `htons`는 16비트 값을, `htonl`은 32비트 값을 네트워크 바이트 순서로 변환합니다.
- **필요한 헤더**:
  ```c
  #include <netinet/in.h>
  ```

### inet_addr(), inet_ntoa() 함수
- **설명**: `inet_addr()`는 IP 주소를 문자열에서 네트워크 바이트 순서의 숫자로 변환합니다. `inet_ntoa()`는 그 반대 변환을 합니다.
- **사용법**: `inet_addr()`는 IP 주소 문자열을 인자로 받으며, `inet_ntoa()`는 `in_addr` 구조체를 인자로 받습니다.
- **예시**:
  ```c
  in_addr_t addr = inet_addr("192.168.0.1");
  struct in_addr inaddr;
  inaddr.s_addr = addr;
  char *addr_str = inet_ntoa(inaddr);
  ```
- **코드 설명**: `inet_addr()`는 문자열을 숫자 IP 주소로, `inet_ntoa()`는 숫자 IP 주소를 문자열로 변환합니다.
- **주의점**: `inet_ntoa()`는 정적 메모리를 사용하므로 스레드에 안전하지 않습니다.
- **필요한 헤더**:
  ```c
  #include <arpa/inet.h>
  ```

### lseek() 함수
- **설명**: 파일 내의 읽기/쓰기 위치를 변경합니다.
- **사용법**: `lseek()`는 파일 디스크립터, 오프셋, 시작 위치를 인자로 사용합니다.
- **예시**:
  ```c
  off_t offset = lseek(fd, 0, SEEK_SET);
  ```
- **코드 설명**: 파일의 시작부터 0 바이트 위치로 이동합니다.
- **주의점**: 파일이 소켓이나 파이프일 경우 `lseek()`의 동작이 정의되어 있지 않습니다.
- **필요한 헤더**:
  ```c
  #include <unistd.h>
  ```

### fstat() 함수
- **설명**: 열린 파일의 상태 정보를 가져옵니다.
- **사용법**: `fstat()`는 파일 디스크립터와 `stat` 구조체를 인자로 사용합니다.
- **예시**:
  ```c
  struct stat statbuf;
  fstat(fd, &statbuf);
  ```
- **코드 설명**: `statbuf` 구조체에 파일의 상태 정보를 저장합니다.
- **주의점**: 파일 상태 정보의 정확성은 파일 시스템에 따라 달라질 수 있습니다.
- **필요한 헤더**:
  ```c
  #include <sys/types.h>
  #include <sys/stat.h>
  #include <unistd.h>
  ```

### fcntl() 함수
- **설명**: 파일 디스크립터의 속성을 변경합니다. `F_SETFL` 명령을 사용하여 소켓을 비차단 모드로 설정하는 데 사용됩니다.
- **사용법**: `fcntl()`은 파일 디스크립터, 명령, 추가 인자를 받습니다.
- **예시**:
  ```c
  fcntl(sockfd, F_SETFL, O_NONBLOCK);
  ```
- **코드 설명**: `sockfd` 소켓을 비차단 모드로 설정합니다.
- **주의점**: 모든 파일 오퍼레이션에 영향을 줄 수 있으므로 주의해서 사용해야 합니다.
- **필요한 헤더**:
  ```c
  #include <fcntl.h>
  ```

### poll(), select(), kqueue(), epoll() 함수
- **설명**: 여러 파일 디스크립터를 동시에 감시하고 I/O 준비 상태를 확인합니다.
- **사용법**:
  - `poll()`과 `select()`는 표준적인 I/O 멀티플렉싱 함수입니다.
  - `kqueue()`와 `epoll()`은 각각 BSD와 리눅스에서 제공하는 향상된 I/O 이벤트 알림 메커니즘입니다.
- **예시**:
  ```c
  // poll() 사용 예
  struct pollfd fds[2];
  fds[0].fd = sockfd1;
  fds[0].events = POLLIN;
  fds[1].fd = sockfd2;
  fds[1].events = POLLIN;
  poll(fds, 2, -1);
  ```
- **코드 설명**: `fds` 배열에 있는 두 소켓의 읽기 가능 상태를 감시합니다.
- **주의점**: 이 함수들은 소켓 상태 변화를 효율적으로 감지할 수 있지만, 사용법이 복잡할 수 있습니다.
- **필요한 헤더**:
  ```c
  #include <poll.h>    // poll()
  #include <sys/select.h> // select()
  #include <sys/epoll.h>  // epoll()
  #include <sys/event.h>  // kqueue()
  ```

### kqueue 및 kevent 시스템

#### kqueue
- **기능**: kqueue는 BSD 기반 시스템에서 I/O 이벤트, 프로세스 상태 변경, 신호 및 타이머를 모니터링하기 위한 메커니즘입니다.
- **동작 방식**: kqueue 함수는 커널 이벤트 큐의 파일 디스크립터를 반환합니다. 이를 통해 여러 이벤트 소스를 효율적으로 관리할 수 있습니다.

#### kevent 구조체
- **용도**: kevent 구조체는 이벤트를 정의하고, kevent 함수를 통해 kqueue에 제출합니다.
- **EV_SET 매크로**: EV_SET 매크로는 kevent 구조체를 초기화하는 데 사용됩니다. 인자로는 이벤트 식별자, 이벤트 필터 타입, 플래그, 필터별 옵션 등이 포함됩니다.
- **예시**:
  ```cpp
  struct kevent ev;
  EV_SET(&ev, fd, EVFILT_READ, EV_ADD | EV_ENABLE, 0, 0, NULL);
  ```

`kevent` 구조체는 이벤트 소스, 종류 및 행동을 정의합니다. 각 필드는 다음과 같은 목적을 가집니다:

1. **ident**: 이벤트와 연결된 식별자 (예: 파일 디스크립터).
2. **filter**: 이벤트 유형을 나타냅니다. 예를 들어 `EVFILT_READ`, `EVFILT_WRITE` 등이 있습니다.
3. **flags**: 이벤트에 대한 다양한 옵션을 설정합니다. 예를 들어 `EV_ADD` (이벤트 추가), `EV_DELETE` (이벤트 제거) 등이 있습니다.
4. **fflags**: 필터별 플래그로, 필터에 따라 다른 의미를 가질 수 있습니다.
5. **data**: 필터에 따라 다른 데이터를 제공합니다. 예를 들어 `EVFILT_READ`의 경우에는 읽을 수 있는 데이터의 양을 나타냅니다.
6. **udata**: 사용자 정의 데이터로, 이벤트와 연결된 추가적인 정보를 저장할 수 있습니다.

#### kevent 함수
- **기능**: kevent 함수는 kqueue에 이벤트를 등록하거나, 이벤트 발생을 기다립니다.
- **사용법**: 
  - 이벤트 등록: 입력 kevent 배열을 사용해 이벤트를 등록합니다.
  - 이벤트 대기: 반환 kevent 배열과 timespec 구조체를 사용해 이벤트 발생을 대기합니다.
- **인자**:
  - `int kq`: kqueue 파일 디스크립터
  - `const struct kevent *changelist`: 등록할 이벤트 배열
  - `int nchanges`: 등록할 이벤트 개수
  - `struct kevent *eventlist`: 이벤트 결과를 저장할 배열
  - `int nevents`: eventlist 배열 크기
  - `const struct timespec *timeout`: 대기 시간 (NULL인 경우 무한 대기)
- **이벤트 등록 및 대기 분리**:
  - 이벤트만 등록하고 싶은 경우: `eventlist`와 `nevents`를 NULL 혹은 0으로 설정
  - 이벤트 대기만 하고 싶은 경우: `changelist`와 `nchanges`를 NULL 혹은 0으로 설정

#### 소켓과 kqueue

소켓이 닫히면, kqueue 시스템은 해당 소켓에 대해 등록된 모든 이벤트를 자동으로 정리합니다. 이는 소켓이 종료될 때 발생하는 자원 해제의 일부로, 프로그래머가 수동으로 이벤트를 제거할 필요를 없애줍니다. 이러한 자동 정리 기능은 리소스 관리를 간소화하고, 잠재적인 메모리 누수나 불필요한 이벤트 감시를 방지하는 데 도움이 됩니다.

## 에러 처리와 디버깅

### 에러 처리 전략
- **함수 반환값 검사**: 소켓 함수들은 대부분 에러 발생 시 `-1`을 반환합니다. 함수 호출 후 반환값을 확인하여 에러 여부를 판단합니다.
- **errno 사용**: 에러가 발생하면, `errno` 변수가 에러 코드를 저장합니다. `perror()` 또는 `strerror(errno)`를 사용하여 에러 메시지를 출력할 수 있습니다.
- **예외 상황 대비**: 네트워크 지연, 연결 중단 등 예외 상황을 고려한 로직을 구현합니다.

### 디버깅 팁
- **로깅**: 문제 발생 시 디버깅을 용이하게 하기 위해 중요한 함수 호출과 변수 상태를 로그로 남깁니다.
- **단계별 테스트**: 네트워크 프로그램을 개발할 때는 소켓 생성부터 데이터 전송까지 단계별로 테스트하는 것이 중요합니다.
- **툴 사용**: 네트워크 패킷 분석 툴(예: Wireshark)을 사용하여 네트워크 트래픽을 모니터링하고 분석합니다.

### 주의할 점
- **블로킹 함수**: `accept()`, `recv()`와 같은 블로킹 함수는 프로그램 흐름을 멈출 수 있으니, 적절한 타임아웃 설정이 필요합니다.
- **자원 관리**: 소켓 사용 후에는 반드시 `close()` 함수로 자원을 해제해야 합니다.

## 비차단 소켓과 이벤트 처리

### 비차단 소켓이란?
- **정의**: 비차단 소켓은 `recv()`, `send()` 등의 I/O 연산이 즉시 반환되어 프로그램이 계속 실행될 수 있도록 하는 소켓입니다.
- **목적**: 애플리케이션이 블로킹 호출로 인해 중단되지 않고, 여러 네트워크 연산을 동시에 처리할 수 있습니다.

### 이벤트 기반 처리 방법
- **select, poll, epoll**: 이 함수들은 여러 소켓을 동시에 모니터링하며, 읽기/쓰기 가능한 소켓을 알려줍니다.
- **사용 사례**: 웹 서버, 채팅 서버 등 여러 클라이언트와의 통신이 필요한 애플리케이션에서 사용됩니다.

### 비차단 소켓 구현
- **소켓 설정**: `fcntl()`을 사용하여 소켓을 비차단 모드로 설정합니다.
- **이벤트 루프**: 애플리케이션은 이벤트 루프를 실행하여 소켓의 상태 변경을 지속적으로 확인합니다.
- **데이터 처리**: 읽기 또는 쓰기 준비가 된 소켓을 확인하고, 해당 소켓에서 데이터 처리를 진행합니다.

### 장단점
- **장점**: 여러 연결을 동시에 처리할 수 있으며, 소켓 하나가 블로킹 되어도 다른 소켓 처리에 영향을 주지 않습니다.
- **단점**: 비차단 소켓과 이벤트 기반 처리 로직은 구현이 복잡할 수 있으며, 효율적인 이벤트 관리가 필요합니다.

#### 비차단 소켓 사용 예제

1. **비차단 소켓 설정**:
   ```c
   int sockfd;
   sockfd = socket(AF_INET, SOCK_STREAM, 0);
   fcntl(sockfd, F_SETFL, O_NONBLOCK);  // 소켓을 비차단 모드로 설정
   ```

2. **이벤트 루프**:
   애플리케이션은 주요 루프(loop) 내에서 `select()` 또는 `poll()` 함수를 사용하여 여러 소켓의 상태를 확인합니다.

3. **데이터 처리**:
   `select()` 또는 `poll()`에서 반환된 결과를 기반으로 읽기 또는 쓰기가 가능한 소켓을 식별하고, 해당 소켓에서 데이터를 처리합니다.

# IRC 서버 소켓 프로그래밍 구조 (OSI 4~5 계층 구현)

## 주요 컴포넌트

### Server 클래스
- 서버 소켓 설정 및 이벤트 기반 네트워크 처리를 담당합니다.
- 클라이언트 연결 및 데이터 읽기/쓰기 이벤트를 관리합니다.
- 서버의 주요 실행 루프와 클라이언트 관리 로직을 포함합니다.

### Command 클래스
- IRC 커맨드와 해당 커맨드를 처리하는 함수를 매핑합니다.
- `RegisterCommand` 메서드를 통해 새로운 커맨드를 등록할 수 있습니다.
- `ExecuteCommand` 메서드를 통해 등록된 커맨드를 실행합니다.

### Message 클래스
- 네트워크를 통해 수신된 IRC 메시지를 파싱하고 저장합니다.
- 메시지의 접두사(prefix), 커맨드, 파라미터, 트레일링(trailing) 부분을 분리하여 저장합니다.
- 파싱된 메시지를 기반으로 커맨드 실행을 위한 데이터를 제공합니다.

### 메인 함수 (main)
- 서버 설정을 초기화하고 실행합니다.
- 커맨드 후킹을 설정합니다.
- 예외 처리를 통해 서버 초기화 중 발생할 수 있는 오류를 관리합니다.

## 실행 흐름
1. 서버 인스턴스 초기화 및 설정.
2. kqueue를 이용한 이벤트 대기 및 처리.
3. 클라이언트로부터의 메시지 수신 및 `Message` 클래스를 통한 파싱.
4. 파싱된 메시지에 따라 `Command` 클래스를 통해 정의된 함수 실행.
5. 클라이언트와의 지속적인 데이터 교환과 상태 관리.

## 후킹 시스템
- 서버는 후킹 시스템을 통해 다양한 IRC 커맨드에 대응할 수 있는 유연한 구조를 가집니다.
- `Command::RegisterCommand`를 사용하여 새로운 커맨드와 처리 함수를 매핑할 수 있습니다.
- 이를 통해 서버의 주요 코드를 수정하지 않고도 새로운 기능을 추가하거나 기존 기능을 변경할 수 있습니다.
- 각 커맨드는 `Message` 객체를 파라미터로 받아 해당 메시지에 대한 적절한 처리를 수행합니다.

### 확장성
- 새로운 IRC 커맨드를 추가하기 위해서는 `Command::RegisterCommand` 메서드를 통해 새로운 커맨드와 함수를 매핑하면 됩니다.
- 서버 로직은 별도로 수정할 필요 없이 커맨드 처리 함수만 추가하면 됩니다.

## 후킹 함수 추가하기

후킹 함수를 추가하는 방법은 다음과 같습니다:
1. `Command::RegisterCommand` 함수를 사용하여 특정 커맨드 이름과 처리할 함수를 매핑합니다.
2. 함수는 `CommandFunction` 타입을 따라야 합니다.

### CommandFunction 타입

`CommandFunction` 타입은 다음과 같은 형태를 가집니다:
- `typedef void (*CommandFunction)(const Message& message);`
- 이 타입은 `Message` 객체를 인자로 받는 함수 포인터를 정의합니다.
- 함수는 반환값이 없고 (`void`), `Message` 객체에 대한 참조자를 인자로 받습니다.

### Message 클래스와 IRC 메시지

`Message` 클래스는 IRC 프로토콜에 따라 파싱된 메시지 정보를 저장합니다. 이 클래스의 메소드를 통해 다음과 같은 정보를 얻을 수 있습니다:
- **접두사(Prefix)**: 메시지의 시작 부분에 있는 선택적 요소로, 보통 사용자나 서버의 정보를 포함합니다.
- **명령어(Command)**: IRC 커맨드를 나타냅니다 (예: JOIN, PART 등).
- **파라미터(Parameters)**: 커맨드에 대한 추가적인 정보나 설정을 제공합니다.
- **트레일링(Trailing)**: 메시지의 본문을 나타내며, 콜론 (`:`) 뒤에 위치합니다.

IRC 프로토콜상 메시지 규격은 일반적으로 `:접두사 명령어 파라미터 :트레일링`의 형태를 취합니다. `Message` 클래스는 이러한 구조를 파싱하여 각 부분을 개별적으로 접근할 수 있도록 합니다.

후킹 함수는 이러한 `Message` 객체를 통해 필요한 정보를 추출하고, 해당 커맨드에 맞는 로직을 실행합니다. 예를 들어, 사용자가 채널에 메시지를 보내는 경우, `Message` 객체에서 해당 채널 이름과 메시지 내용을 추출하여 처리할 수 있습니다.

이 시스템은 유연하고 확장 가능한 방식으로 다양한 IRC 커맨드를 처리할 수 있게 해 줍니다.

물론입니다. 후킹 시스템에서 사용되는 함수의 예시와 이를 등록하는 방법을 설명해 보겠습니다.

### 후킹 함수 예시

다음은 간단한 후킹 함수 예시입니다. 이 함수는 `Message` 객체를 받아 특정 커맨드에 대응하는 작업을 수행합니다.

```cpp
void handleJoinCommand(const Message& message) {
    // message 객체에서 필요한 정보 추출
    std::string channel = message.GetParameters()[0];
    std::string user = message.GetPrefix();

    // 채널 입장 로직 처리
    std::cout << user << " joined " << channel << std::endl;
}
```

이 함수는 사용자가 채널에 입장하는 `JOIN` 커맨드를 처리합니다. `Message` 객체에서 채널 이름과 사용자 이름을 추출하여 콘솔에 출력합니다.

### 후킹 함수 등록 방법

이 후킹 함수를 시스템에 등록하는 방법은 다음과 같습니다:

```cpp
int main() {
    // 서버 인스턴스 생성 및 설정 코드...

    // 커맨드 후킹 함수 등록
    Command::RegisterCommand("JOIN", handleJoinCommand);

    // 서버 실행 코드...
}
```

`main` 함수에서 `Command::RegisterCommand` 메서드를 호출하여 `JOIN` 커맨드에 `handleJoinCommand` 함수를 연결합니다. 이제 `JOIN` 커맨드가 수신되면 `handleJoinCommand` 함수가 호출되어 해당 로직을 처리하게 됩니다.

이와 같은 방식으로 다양한 IRC 커맨드에 대응하는 함수를 만들고 등록할 수 있습니다. 이는 각 커맨드에 대한 로직을 유연하게 관리할 수 있게 해 주며, 서버 코드의 수정 없이 새로운 기능을 추가할 수 있는 확장성을 제공합니다.

## server 클래스의 동작 순서 모식도
```plaintext
┌──────────────────────────┐
│ main function            │
│ - Create server instance │
│ - Register command hooks ────────────────────────────┐
│ - Start the server       │                           │
└──────────────────────────┘                           │
           │                                           │
           │ Server initialization and execution       │
           ▼                                           │
┌─────────────────────────────────┐                    │
│ Server class                    │                    │
│ - kqueue event loop             │◀───────────────────│───────────────┐
│ - Manage connections and events │                    │               │
└─────────────────────────────────┘                    │               │
           │                                           │               │
           │ Wait for and handle events                │               │
           ▼                                           │               │
┌─────────────────────────────────────────────┐        │               │
│ Event handling logic                        │        │               │
│ ┌───────────────┐ ┌───────────────┐         │        │               │
│ │ handleRead    │ │ handleWrite   │         │        │               │
│ └───────────────┘ └───────────────┘         │        │               │
│ ┌──────────────────┐                        │        │               │
│ │ acceptConnection │                        │        │               │
│ └──────────────────┘                        │        │               │
│ - Read: Receive and parse messages          │        │               │
│ - Write: Send messages to clients           │        │               │
│ - Accept: Accept new connections            │        │               │
│                                             │        │               │
│ Restart the loop on Write and Accept ────────────────│──────────────►│
│ Parse messages and execute commands on Read │        │               │
└────────────────────────────────────────│────┘        │               │
                                         │             │               │
     Parse messages and execute commands │             │               │
                                         │             │               │
┌─────────────────────┐                  │             │               │
│ Message class       │◀─────────────────┘             │               │
│ - Parse messages    │                                │               │
│ - Extract data      │                                │               │
└─────────────────────┘                                │               │
           │                                           │               │
           │ Map and execute commands                  │               │
           ▼                                           ▼               │
┌─────────────────────┐        ┌─────────────────────────┐             │
│ Command class       │        │ Hook function table     │             │
│ - Execute commands  │        │ - Store command list    │             │
│ - Call hook functions ──────►│ - Store hook functions  │             │
└─────────────────────┘        └─────────────────────────┘             │
           │                                                           │
           │ Execute user-defined logic                                │
           ▼                                                           │
┌────────────────────────────────┐                                     │
│ User-defined functions         │                                     │
│ - Processing for each command  │                                     │
└────────────────────────────────┘                                     │
           │                                                           │
           │ Restart the loop after execution                          │
           └───────────────────────────────────────────────────────────┘
```
```plaintext
┌─────────────────────┐
│ main 함수            │
│ - 서버 인스턴스 생성     │
│ - 커맨드 후킹 등록 ─────────────────────────────────┐
│ - 서버 실행           │                           │
└─────────────────────┘                           │
           │                                      │
           │ 서버 초기화 및 실행                       │
           ▼                                      │
┌──────────────────────────┐                      │
│ Server 클래스              │                      │
│ - kqueue 이벤트 루프        │◀─────────────────────│───────────────┐
│ - 연결 및 이벤트 관리         │                      │               │
└──────────────────────────┘                      │               │
           │                                      │               │
           │ 이벤트 대기 및 처리                       │               │
           ▼                                      │               │
┌────────────────────────────────────────┐        │               │
│ 이벤트 처리 로직                           │        │               │
│ ┌───────────────┐ ┌───────────────┐    │        │               │
│ │ handleRead    │ │ handleWrite   │    │        │               │
│ └───────────────┘ └───────────────┘    │        │               │
│ ┌──────────────────┐                   │        │               │
│ │ acceptConnection │                   │        │               │
│ └──────────────────┘                   │        │               │
│ - Read: 메시지 수신 및 파싱                 │        │               │
│ - Write: 클라이언트에 메시지 전송             │        │               │
│ - Accept: 새로운 연결 수락                 │        │               │
│                                        │        │               │
│ Write, Accept 시 루프 재시작────────────────────────│──────────────►│
│ Read 시 메시지 파싱 및 커맨드 실행            │        │               │
└───────────────────────────────│────────┘        │               │
                                │                 │               │
            메시지 파싱 및 커맨드 실행 │                 │               │
                                │                 │               │
┌─────────────────────┐         │                 │               │
│ Message 클래스        │◀────────┘                 │               │
│ - 메시지 파싱          │                           │               │
│ - 데이터 추출          │                           │               │
└─────────────────────┘                           │               │
           │                                      │               │
           │ 커맨드 매핑 및 실행                       │               │
           ▼                                      ▼               │
┌─────────────────────┐        ┌─────────────────────┐            │
│ Command 클래스        │        │ 후킹 함수 테이블        │            │
│ - 커맨드 실행          │        │ - 커맨드 목록 보관      │            │
│ - 후킹 함수 호출 ───────────────►│ - 후싱 함수 보관       │            │
└─────────────────────┘        └─────────────────────┘            │
           │                                                      │
           │ 사용자 정의 로직 실행                                     │
           ▼                                                      │
┌─────────────────────┐                                           │
│ 사용자 정의 함수        │                                           │
│ - 각 커맨드 별 처리     │                                           │
└─────────────────────┘                                           │
           │                                                      │
           │ 실행 완료 후 루프 재시작                                   │
           └──────────────────────────────────────────────────────┘

```

# IRC 서버 프로토콜 표준 (OSI 6~7 계층)

## IRC 프로토콜 개요
IRC(인터넷 릴레이 채팅) 프로토콜은 실시간으로 메시지를 교환할 수 있는 통신 프로토콜입니다. 이 프로토콜은 연결 설정, 사용자 등록, 메시지 교환, 채널 관리 등 여러 단계로 구성됩니다.

### 1. 연결 설정
- 클라이언트는 서버에 연결을 시도합니다.
- 서버가 패스워드를 요구하면 클라이언트는 `PASS` 명령어로 패스워드를 제공합니다.
- `QUIT` 명령어는 언제든 사용 가능합니다.

### 2. 사용자 등록
- 연결 후 클라이언트는 `NICK` 명령어로 닉네임을 설정합니다.
- `USER` 명령어로 사용자 이름, 호스트, 서버, 실제 이름을 제공합니다.
- `NICK`과 `USER` 명령어는 서버에 등록하기 위해 필수적입니다.

### 3. 메시지 교환
- 등록이 완료되면 클라이언트는 서버와 메시지를 교환할 수 있습니다.
- `PRIVMSG` 명령어로 개인 메시지를 보내거나, `NOTICE` 명령어로 알림 메시지를 전송할 수 있습니다.

### 4. 채널 참여
- `JOIN` 명령어로 채널에 참여합니다.
- 채널에서는 다른 사용자들과 대화하거나 채널 관련 활동을 할 수 있습니다.

### 5. 추가 명령어 사용
- `PART` 명령어로 채널을 퇴장하거나, `LIST` 명령어로 채널 목록을 조회할 수 있습니다.
- 관리자 또는 특별 권한이 필요한 명령어(예: `KICK`, `BAN`)도 있습니다.

### 6. 연결 종료
- `QUIT` 명령어로 서버와의 연결을 종료합니다.

### 구현에 있어서 주의할 점
- **PASS 명령어 처리**: 서버가 패스워드를 요구하는 경우, 클라이언트는 초기 연결 단계에서 반드시 `PASS` 명령어로 패스워드를 제공해야 합니다.
- **NICK과 USER 명령어**: 이 두 명령어는 서버에 사용자를 등록하는 데 필요합니다. `NICK`은 닉네임 설정, `USER`는 사용자 정보를 제공하는 데 사용됩니다.
- **메시지 포맷과 오류 처리**: IRC 프로토콜의 메시지 포맷을 정확히 준수하고, 오류 상황에 대한 적절한 처리가 필요합니다.
- **채널 관리**: 채널 참여, 퇴장, 관리 등에 대한 명령어를 정확히 구현하고 관리해야 합니다.

## IRC 프로토콜: 연결 설정

IRC 프로토콜에서 연결 설정 과정은 특히 중요합니다. 이 단계에서 클라이언트와 서버 간의 초기 연결이 구성되며, 사용자 인증 및 초기 설정이 이루어집니다. 이 단계에서의 명령어 처리와 오류 관리는 서버의 보안 및 프로토콜 준수에 핵심적인 역할을 합니다.
주요 요소는 다음과 같습니다:

### 1. `PASS` 명령어
- 클라이언트가 서버에 연결되면, 서버는 클라이언트에게 패스워드를 요구할 수 있습니다.
- 클라이언트는 `PASS <password>` 형식으로 패스워드를 제공합니다.
- 이 명령어는 다른 모든 명령어보다 먼저 전송되어야 합니다.

### 2. `QUIT` 명령어
- 언제든지 연결을 종료하고자 할 때 사용합니다.
- `QUIT`은 연결 설정 단계에서도 사용할 수 있습니다.

### 주의사항
- **인증 시퀀스의 중요성**: 서버는 `PASS` 명령어를 통한 인증을 요구할 수 있으며, 이는 다른 모든 활동에 앞서 처리되어야 합니다.
- **명령어 순서**: 클라이언트는 `NICK`이나 `USER` 명령어를 `PASS` 명령어 전에 전송해서는 안 됩니다.
- **오류 처리**: 잘못된 패스워드 또는 명령어 순서 오류시 적절한 오류 메시지를 반환하고 필요에 따라 연결을 종료합니다.

## IRC 프로토콜: 사용자 연결 설정

사용자 연결 설정 단계에서는 클라이언트가 자신의 신원을 서버에 알리는 과정이 중요합니다. 이는 `NICK` 및 `USER` 명령어를 통해 이루어집니다.
이 단계에서의 명령어 처리는 사용자 신원의 정확성과 서버의 안정적인 작동을 보장하는 데 중요합니다.

### 1. `NICK` 명령어
- 사용자가 채팅 세션에서 사용할 닉네임을 설정합니다.
- 형식: `NICK <nickname>`
- 예시: `NICK JohnDoe`

### 2. `USER` 명령어
- 사용자의 추가 정보를 제공합니다.
- 형식: `USER <username> <hostname> <servername> <realname>`
- 예시: `USER johndoe localhost servername John Doe`

### 순서 및 필수성
- `NICK`과 `USER`는 순서에 관계없이 모두 설정되어야 합니다.
- 이 단계에서 설정하지 않으면, 서버와의 추가적인 상호작용이 제한됩니다.

### 구현 고려사항
- **명령어 유효성 검증**: 올바른 형식과 파라미터가 제공되었는지 확인합니다.
- **중복 닉네임 관리**: 동일한 닉네임을 가진 다른 사용자가 있는지 확인하고, 중복 시 오류 메시지를 반환합니다.
- **상태 관리**: `NICK`과 `USER` 설정 완료 후, 사용자의 상태를 '등록 완료'로 변경하여 다른 명령어 사용을 허용합니다.

## IRC 프로토콜: 메시지 교환

메시지 교환 단계에서는 클라이언트가 서버와 다양한 형태의 메시지를 교환합니다. 이 단계의 핵심은 메시지 전송 및 수신의 메커니즘을 이해하는 것입니다.
이 단계는 IRC 서버의 핵심적인 상호작용을 구현하는 부분이며, 사용자 경험에 직접적인 영향을 미치므로 주의 깊게 구현해야 합니다.

### 1. `PRIVMSG` 명령어
- 개인 또는 채널에 메시지를 보냅니다.
- 형식: `PRIVMSG <대상> :<메시지>`
- 예시: `PRIVMSG JohnDoe :Hello, John!`
- 응용: 채널에 메시지를 보내려면 `<대상>`을 채널 이름으로 설정합니다.

### 2. `NOTICE` 명령어
- `PRIVMSG`와 유사하지만, 자동 응답 방지를 위해 사용됩니다.
- 형식: `NOTICE <대상> :<메시지>`
- 예시: `NOTICE JohnDoe :This is an automated message.`

### 메시지 전달 과정
- 클라이언트가 서버에 메시지를 보내면 서버는 해당 메시지를 지정된 대상(개인 또는 채널)에 전달합니다.
- 채널 메시지는 해당 채널에 있는 모든 클라이언트에게 전달됩니다.

### 구현 고려사항
- **메시지 포맷 검증**: 메시지 형식이 올바른지 확인합니다.
- **대상 유효성 확인**: 대상이 존재하는지, 올바른 대상인지 확인합니다.
- **피드백 메시지 관리**: 오류 발생 시 적절한 피드백을 제공합니다.

## IRC 프로토콜: 채널 참여

채널 참여는 IRC 네트워크에서 중요한 요소입니다. 클라이언트는 `JOIN` 명령어를 사용하여 채널에 참여합니다.
채널 시스템은 IRC 서버의 핵심 기능 중 하나이므로, 구현 시 세심한 주의가 필요합니다. 채널의 동적 관리와 사용자 경험을 위한 효율적인 시스템 설계가 중요합니다.

### `JOIN` 명령어
- 채널에 참여하거나 새로운 채널을 생성합니다.
- 형식: `JOIN <채널명>`
- 예시: `JOIN #general`

### 채널 시스템 구현 시 고려사항
- **채널 관리**: 채널의 생성, 삭제, 사용자 관리 등을 효율적으로 처리해야 합니다.
- **다중 채널 참여**: 사용자가 여러 채널에 동시에 참여할 수 있도록 관리합니다.
- **채널 상태 정보**: 채널의 현재 상태(사용자 수, 채널 모드 등)를 관리합니다.
- **채널 권한 및 규칙**: 채널 관리자, 읽기 전용 모드 등 채널별 규칙과 권한을 설정합니다.

## IRC 프로토콜: 추가 명령어 사용

IRC 네트워크에서는 다양한 명령어를 사용하여 통신과 상호작용을 합니다. 이 중 일부 주요 명령어에 대해 살펴보겠습니다.
이러한 명령어들은 IRC 네트워크 상호작용의 핵심이며, 각각의 명령어가 특정 상황과 요구에 맞게 사용되어야 합니다.

### 1. `PRIVMSG`와 `NOTICE`
- **기능**: 개인 메시지 또는 채널 메시지를 전송합니다.
- **형식**: `PRIVMSG <대상> :<메시지>`
- **예시**: `PRIVMSG #general :안녕하세요!`

### 2. `PART`
- **기능**: 채널에서 퇴장합니다.
- **형식**: `PART <채널명>`
- **예시**: `PART #general`

### 3. `KICK`
- **기능**: 사용자를 채널에서 강제로 퇴장시킵니다.
- **형식**: `KICK <채널명> <유저명> :<사유>`
- **예시**: `KICK #general user :규칙 위반`

### 4. `INVITE`
- **기능**: 사용자를 채널로 초대합니다.
- **형식**: `INVITE <유저명> <채널명>`
- **예시**: `INVITE user #private_channel`

### 5. `TOPIC`
- **기능**: 채널의 주제를 설정하거나 확인합니다.
- **형식**: `TOPIC <채널명> :<새 주제>`
- **예시**: `TOPIC #general :IRC 채팅방 주제`

### 6. `MODE`
- **기능**: 채널 또는 사용자의 모드를 설정합니다.
- **형식**: `MODE <채널명/유저명> <모드 설정>`
- **예시**: `MODE #general +t`
- **모드 옵션**: 
  - `i`: 초대 전용 채널
  - `t`: 주제 설정은 관리자만 가능
  - `k`: 채널에 비밀번호 설정
  - `o`: 특정 사용자에게 연산자 권한 부여
  - `l`: 채널 인원 제한 설정

`MODE` 명령어는 채널 설정과 사용자 권한을 관리하는데 중요한 역할을 합니다. 각 옵션은 채널의 운영 방식과 참여 조건을 결정하므로, 정확한 이해와 사용이 필요합니다.

## IRC 프로토콜: 연결 종료

IRC에서의 연결 종료는 단순하지만 중요한 부분입니다. 사용자가 IRC 네트워크에서 나가고자 할 때 사용되는 주요 명령어는 `QUIT`입니다.

### `QUIT` 명령어
- **기능**: 서버와의 연결을 종료합니다.
- **형식**: `QUIT :<사유>`
- **예시**: `QUIT :접속 종료`

사용자가 `QUIT` 명령어를 입력하면, 선택적으로 종료 사유를 같이 전송할 수 있습니다. 이 사유는 다른 사용자에게 표시되며, 서버에서도 로깅할 수 있습니다.

연결 종료 과정에서는 서버가 클라이언트의 연결을 정리하고, 해당 사용자가 참여하고 있던 채널에서도 사용자가 나갔음을 알립니다. 이는 다른 사용자들에게도 통지되며, 채널의 사용자 목록에서 해당 사용자가 제거됩니다.

### 추가 고려사항
- 서버가 예상치 못한 상황으로 클라이언트 연결이 끊어질 경우, 서버는 이를 감지하고 적절한 처리를 해야 합니다.
- 연결 종료 시, 사용자의 마지막 상태를 기록하거나, 특정 처리를 수행할 수 있습니다.
- `QUIT` 명령어는 언제든지 사용자가 연결을 종료할 수 있는 가장 간단한 방법을 제공합니다.

**클라이언트가 정상적으로 `QUIT` 명령어를 통해 연결을 종료하는 경우**: 이때는 클라이언트가 6-7계층에서 자원을 정리한 후 서버에 연결 해제를 요청합니다. 서버는 이 요청에 응답하여 연결을 종료하고 관련 자원을 해제합니다.
  
**클라이언트 연결이 갑자기 끊어지는 경우**: 이 경우 서버의 4-5계층에서 EOF 신호를 받고 read 값이 0이면, 서버는 연결을 종료하고 자원을 해제합니다. 하지만 6-7계층에서는 클라이언트의 자원이 여전히 남아있을 수 있으므로, 이 경우 서버는 6-7계층에게 해당 유저의 자원을 정리하도록 요청해야 합니다.

이러한 상황에서 6-7계층의 IRC 프로토콜 구현부는 서버로부터 연결 해제 요청을 받거나 `QUIT` 명령어를 처리할 때 모두 적절한 자원 정리를 수행해야 합니다. 이는 구현 시 두 계층 간의 상호 작용을 고려하여 설계해야 함을 의미합니다. 
