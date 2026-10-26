/* Firmware entry: 0x4811e15c */

/* WARNING: Removing unreachable block (ram,0x4811e398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_test_4811e15c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char local_2ac [385];
  char cStack_12b;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4808cdaa();
  if (iVar1 == 0) {
    return;
  }
  if ((DAT_ram_4ff6dcc8 == 0) || (DAT_ram_4ff6dcc4 == 0)) {
    pcVar4 = "resource_error";
    uVar2 = 0x1f7;
  }
  else {
    iVar1 = FUN_ram_48032c1a();
    if (iVar1 == 0) {
      if (DAT_ram_4ff47e54 == '\0') {
        FUN_ram_4808cb66(0x1f7,"storage_wait");
        return;
      }
      puVar6 = &DAT_ram_482230e4;
      pcVar4 = local_2ac;
      do {
        uVar8 = puVar6[1];
        uVar7 = puVar6[2];
        uVar2 = puVar6[3];
        uVar3 = puVar6[4];
        uVar5 = puVar6[5];
        *(undefined4 *)pcVar4 = *puVar6;
        *(undefined4 *)(pcVar4 + 4) = uVar8;
        *(undefined4 *)(pcVar4 + 8) = uVar7;
        *(undefined4 *)(pcVar4 + 0xc) = uVar2;
        *(undefined4 *)(pcVar4 + 0x10) = uVar3;
        *(undefined4 *)(pcVar4 + 0x14) = uVar5;
        puVar6 = puVar6 + 6;
        pcVar4 = pcVar4 + 0x18;
      } while (puVar6 != (undefined4 *)&DAT_ram_4822336c);
      *(undefined4 *)pcVar4 = _DAT_ram_4822336c;
      iVar1 = FUN_ram_4808d01a(local_2ac);
      if (iVar1 == 0) {
        return;
      }
      if ((local_2ac[0] == '\0') || (cStack_12b == '\0')) {
        FUN_ram_4808cb66(400,"token_required");
        return;
      }
      iVar1 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
      if (iVar1 == 3) {
        lVar9 = FUN_ram_4819b728(0);
        if (0x6592007f < lVar9) {
          if (*(char *)(DAT_ram_4ff6dcc8 + 0x63cf) == '\0') {
            pcVar4 = "identity_unavailable";
            uVar2 = 0x1f7;
          }
          else {
            if (((DAT_ram_4ff6dc9c != 0) && (DAT_ram_4ff6dc94 != 0)) &&
               (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) {
              fence();
              fence();
              if (((*(char *)(DAT_ram_4ff6dc9c + 0x87b5d) == '\0') &&
                  (*(char *)(DAT_ram_4ff6dc9c + 0x87b6a) == '\0')) &&
                 ((iVar1 = FUN_ram_48118d2c(1), iVar1 != 0 &&
                  (iVar1 = FUN_ram_480b8c0a(6,local_2ac), iVar1 != 0)))) {
                *(char **)(DAT_ram_4ff6dcc8 + 0x640c) = "testing";
                FUN_ram_48067954(&DAT_ram_4ff5cb9c,200,"application/json",
                                 "{\"ok\":true,\"queued\":true}");
                return;
              }
            }
            pcVar4 = "sync_busy_or_unavailable";
            uVar2 = 0x199;
          }
          FUN_ram_4808cb66(uVar2,pcVar4);
          return;
        }
        pcVar4 = "time_wait";
      }
      else {
        pcVar4 = "offline";
      }
      FUN_ram_4808cb66(0x199,pcVar4);
      return;
    }
    pcVar4 = "ota_busy";
    uVar2 = 0x199;
  }
  FUN_ram_4808cb66(uVar2,pcVar4);
  return;
}


