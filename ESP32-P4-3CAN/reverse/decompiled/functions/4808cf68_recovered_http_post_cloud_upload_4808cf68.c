/* Firmware entry: 0x4808cf68 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_upload_4808cf68(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dcc8 == (char *)0x0) || (DAT_ram_4ff6dcc4 == 0)) {
    FUN_ram_4808cb66(0x1f7,"resource_error");
    return;
  }
  iVar1 = FUN_ram_48032c1a();
  pcVar3 = DAT_ram_4ff6dcc8;
  if (iVar1 == 0) {
    if (((DAT_ram_4ff6dcc8[0x28a] != '\0') && (*DAT_ram_4ff6dcc8 != '\0')) &&
       (DAT_ram_4ff6dcc8[0x181] != '\0')) {
      DAT_ram_4ff6dcc8[0x6401] = '\x01';
      uVar2 = FUN_ram_48025ba6();
      *(undefined4 *)(pcVar3 + 0xf94) = uVar2;
      pcVar3[0xffc] = '\0';
      pcVar3[0xffd] = '\x01';
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json","{\"ok\":true,\"queued\":true}",0x19
                      );
      return;
    }
    pcVar3 = "upload_disabled";
  }
  else {
    pcVar3 = "ota_busy";
  }
  FUN_ram_4808cb66(0x199,pcVar3);
  return;
}


