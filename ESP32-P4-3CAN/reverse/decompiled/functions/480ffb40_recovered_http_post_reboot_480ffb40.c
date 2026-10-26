/* Firmware entry: 0x480ffb40 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_reboot_480ffb40(void)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_480a3262();
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}",0x1f);
    return;
  }
  if (iVar2 != 0) {
    if (*(char *)(DAT_ram_4ff6dc9c + 0x86970) != '\0') {
      pcVar1 = (char *)(DAT_ram_4ff6dc9c + 0x86970);
      sVar3 = strlen(pcVar1);
      if (sVar3 < 0x41) {
        __s = (char *)(DAT_ram_4ff6dc94 + 0x965b);
        sVar4 = strlen(__s);
        if ((sVar4 == 0x40) && ((DAT_ram_4ff5c880 & 0xfb) == 0)) {
          FUN_ram_4ff45158(&DAT_ram_4ff5c881,pcVar1,sVar3 + 1);
          FUN_ram_4ff454c4(&DAT_ram_4ff5c8c2,__s);
          DAT_ram_4ff5c903 = 0;
          DAT_ram_4ff5c880 = 1;
          FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json",
                           "{\"ok\":true,\"rebooting\":true}",0x1c);
          return;
        }
      }
    }
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"reboot_busy\"}",0x22);
    return;
  }
  FUN_ram_4802ad46(&DAT_ram_4ff5c55c,&DAT_ram_481df390);
  DAT_ram_4ff5c5c0 = '\x01';
  iVar2 = FUN_ram_480fe83a(4);
  if (iVar2 == 0) {
    if (DAT_ram_4ff5c5c0 != '\0') {
      FUN_ram_480fed16(1);
    }
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"can_quiesce\"}",0x22);
    return;
  }
  iVar2 = FUN_ram_480f24fc();
  if (iVar2 != 0) {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json","{\"ok\":true}",0xb);
    iVar2 = FUN_ram_48025ba6();
    DAT_ram_4ff6de04 = 1;
    DAT_ram_4ff6de00 = iVar2 + 0xfa;
    return;
  }
  if ((DAT_ram_4ff5c5c0 == '\0') || (iVar2 = FUN_ram_480fed16(1), iVar2 == 0)) {
    pcVar1 = "{\"ok\":false,\"error\":\"can_restore\"}";
    uVar5 = 0x1f7;
  }
  else {
    pcVar1 = "{\"ok\":false,\"error\":\"persistence_flush\"}";
    uVar5 = 500;
  }
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar5,"application/json",pcVar1);
  return;
}


