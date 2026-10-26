/* Firmware entry: 0x480f3d2c */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_wifi_ap_config_480f3d2c(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int local_50 [2];
  int iStack_48;
  byte bStack_41;
  undefined1 auStack_40 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}",0x1f);
    return;
  }
  if (DAT_ram_4ff5c5f8 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ap_restart_pending\"}",0x29);
    return;
  }
  FUN_ram_4802a8a8(auStack_40,"password");
  iVar4 = FUN_ram_4802b18e(auStack_40,"plain");
  iVar1 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar8 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar2 = 0;
      do {
        iVar6 = FUN_ram_4802b18e(auStack_40,*puVar8);
        if (iVar6 != 0) {
          FUN_ram_4802a8a8(local_50,*(undefined4 *)(iVar1 + (iVar5 * 0x3a8 + uVar2) * 8 + 0xcc8));
          FUN_ram_4802a59e(auStack_40);
          goto joined_r0x480f3f3c;
        }
        uVar2 = uVar2 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar2 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(local_50,&DAT_ram_481df390);
  }
  else {
    puVar7 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(local_50,puVar7,*(undefined4 *)(iVar4 + 0x438));
  }
  FUN_ram_4802a59e(auStack_40);
joined_r0x480f3f3c:
  if ((char)bStack_41 < '\0') {
    if ((bStack_41 & 0x7f) != 0) {
      if (((bStack_41 & 0x7f) + 0x78 & 0x7f) < 0x38) goto LAB_ram_480f3ddc;
LAB_ram_480f3f5a:
      FUN_ram_48066698(&DAT_ram_4ff5cb9c,400,"application/json",
                       "{\"ok\":false,\"error\":\"invalid_ap_password\"}",0x2a);
      goto LAB_ram_480f3f7a;
    }
LAB_ram_480f3f90:
    FUN_ram_4802ad02(&DAT_ram_4ff5c654,&DAT_ram_4ff5c644);
    bVar9 = 0;
    bVar3 = 0;
    if (-1 < (char)bStack_41) goto LAB_ram_480f3e0a;
LAB_ram_480f3fac:
    if ((bStack_41 & 0x7f) != 0) goto LAB_ram_480f3fb8;
  }
  else {
    if ((local_50[0] == 0) || (iStack_48 == 0)) goto LAB_ram_480f3f90;
    if (0x37 < iStack_48 - 8U) goto LAB_ram_480f3f5a;
LAB_ram_480f3ddc:
    bVar3 = FUN_ram_4802b13e(local_50,&DAT_ram_4ff5c644);
    bVar3 = bVar3 ^ 1;
    FUN_ram_4802ad02(&DAT_ram_4ff5c654,&DAT_ram_4ff5c644);
    bVar9 = bVar3;
    if ((char)bStack_41 < '\0') goto LAB_ram_480f3fac;
LAB_ram_480f3e0a:
    bVar9 = bVar3;
    if ((local_50[0] != 0) && (iStack_48 != 0)) {
LAB_ram_480f3fb8:
      FUN_ram_4802ad02(&DAT_ram_4ff5c644,local_50);
    }
  }
  if (DAT_ram_4ff6de6e == '\0') {
    iVar5 = FUN_ram_480334d2();
  }
  else {
    DAT_ram_4ff5ca74 = DAT_ram_4ff5ca74 + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x20;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    iVar5 = FUN_ram_480ee046();
  }
  if (iVar5 != 0) {
    if (bVar9 != 0) {
      puVar8 = &DAT_ram_4ff5cad4;
      do {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        *(undefined1 *)(puVar8 + 0xb) = 0;
        puVar8 = puVar8 + 0xc;
      } while (puVar8 != (undefined4 *)&DAT_ram_4ff5cb94);
      DAT_ram_4ff5cb94 = 0;
    }
    DAT_ram_4ff5c5f8 = 1;
    DAT_ram_4ff5c614 = 0;
    iVar5 = FUN_ram_48025ba6();
    DAT_ram_4ff5c620 = iVar5 + 0xfa;
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0xca,"application/json","{\"ok\":true,\"apRestarting\":true}"
                     ,0x1f);
    FUN_ram_4802a59e(local_50);
    return;
  }
  FUN_ram_4802ad02(&DAT_ram_4ff5c644,&DAT_ram_4ff5c654);
  FUN_ram_4802ad46(&DAT_ram_4ff5c654,&DAT_ram_481df390);
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                   "{\"ok\":false,\"error\":\"preferences_write\"}");
LAB_ram_480f3f7a:
  FUN_ram_4802a59e(local_50);
  return;
}


