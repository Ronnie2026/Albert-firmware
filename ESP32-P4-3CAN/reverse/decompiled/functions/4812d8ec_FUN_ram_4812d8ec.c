/* Firmware entry: 0x4812d8ec */

undefined4 FUN_ram_4812d8ec(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char acStack_164 [4];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int aiStack_158 [8];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [264];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4812ce04(aiStack_158);
  if (iVar2 != 0) {
    iVar2 = 0x10;
    while (iVar3 = FUN_ram_4812e1d6(0,iVar2,0), iVar3 != 0) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("esp_ota_ops.c",0x222,"esp_ota_get_app_partition_count",
                         "ota_app_count < 16 && \"must erase the partition before writing to it\"");
      }
    }
    uVar1 = iVar2 - 0x10U & 0xffff;
    if (uVar1 == 0) {
      return 0;
    }
    acStack_164[0] = FUN_ram_4812ea1a(aiStack_158);
    acStack_164[1] = FUN_ram_4812ea1a(auStack_138);
    uVar4 = FUN_ram_4812ec92(aiStack_158,acStack_164,1);
    if (uVar4 == 0xffffffff) {
      return 0;
    }
    uVar4 = ~uVar4 & 1;
    if (acStack_164[uVar4] == '\0') {
      iVar2 = FUN_ram_4812e1d6(0,0,0);
      if (iVar2 != 0) {
        uStack_15c = *(undefined4 *)(iVar2 + 0x10);
        uStack_160 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = thunk_FUN_ram_4812f3b2(1,&uStack_160,auStack_118);
        if (iVar2 == 0) {
          return 1;
        }
      }
      if (acStack_164[uVar4] == '\0') {
        return 0;
      }
    }
    iVar2 = FUN_ram_4812e1d6(0,(aiStack_158[uVar4 * 8] - 1U) % uVar1 + 0x10,0);
    if (iVar2 != 0) {
      uStack_15c = *(undefined4 *)(iVar2 + 0x10);
      uStack_160 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = thunk_FUN_ram_4812f3b2(1,&uStack_160,auStack_118);
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


