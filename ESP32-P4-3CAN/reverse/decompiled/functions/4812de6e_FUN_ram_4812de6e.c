/* Firmware entry: 0x4812de6e */

int FUN_ram_4812de6e(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_b0;
  undefined4 uStack_ac;
  short sStack_a8;
  byte bStack_a6;
  byte bStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [16];
  uint uStack_8c;
  undefined1 auStack_88 [88];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216d6(&DAT_ram_4ff6e0a0);
  if (DAT_ram_4ff6e0a4 == (undefined4 *)0x0) {
    MD5Init(auStack_88);
    iVar1 = FUN_ram_4812fa26(0,0x1000,0,&local_b0,&uStack_ac);
    if (iVar1 == 0) {
      iVar1 = local_b0 + 0x8000;
      iVar7 = local_b0 + 0x9000;
      puVar5 = (undefined4 *)0x0;
      puVar6 = (undefined4 *)0x0;
      local_b0 = iVar1;
      do {
        FUN_ram_4ff45158(&sStack_a8,iVar1,0x20);
        if (sStack_a8 == -0x1415) {
          if (iVar1 != 0) {
            MD5Final(&sStack_a8,auStack_88,0x20);
            iVar1 = FUN_ram_4ff4511a(&sStack_a8,iVar1 + 0x10,0x10);
            if (iVar1 != 0) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"partition","E (%lu) %s: Partition table MD5 mismatch\n",uVar4,
                               "partition");
              iVar1 = 0x103;
              goto LAB_ram_4812e052;
            }
            DAT_ram_4ff6e0a4 = puVar5;
            FUN_ram_4812fb50(uStack_ac);
            goto LAB_ram_4812de92;
          }
          break;
        }
        if (sStack_a8 != 0x50aa) break;
        MD5Update(auStack_88,&sStack_a8);
        puVar3 = (undefined4 *)FUN_ram_4ff45080(1,0x34);
        uVar4 = DAT_ram_4ff6e0b8;
        if (puVar3 == (undefined4 *)0x0) break;
        puVar3[1] = (uint)bStack_a6;
        puVar3[2] = (uint)bStack_a5;
        puVar3[4] = uStack_a0;
        puVar3[3] = uStack_a4;
        puVar3[5] = 0x1000;
        *puVar3 = uVar4;
        uVar2 = FUN_ram_4812de1c(uStack_8c & 1);
        *(undefined1 *)(puVar3 + 0xb) = 0;
        *(undefined1 *)((int)puVar3 + 0x29) = uVar2;
        *(byte *)((int)puVar3 + 0x2a) = (byte)(uStack_8c >> 1) & 1;
        FUN_ram_4ff45594(puVar3 + 6,auStack_9c,0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar3[0xc] = puVar5;
          puVar5 = puVar3;
        }
        else {
          puVar3[0xc] = puVar6[0xc];
          puVar6[0xc] = puVar3;
        }
        iVar1 = iVar1 + 0x20;
        puVar6 = puVar3;
      } while (iVar1 != iVar7);
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"partition","E (%lu) %s: No MD5 found in partition table\n",uVar4,
                       "partition");
      iVar1 = 0x105;
LAB_ram_4812e052:
      while (puVar5 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)puVar5[0xc];
        thunk_FUN_ram_4ff209c6(puVar5);
        puVar5 = puVar6;
      }
      FUN_ram_4812fb50(uStack_ac);
    }
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"partition","E (%lu) %s: load_partitions returned 0x%x\n",uVar4,"partition",
                     iVar1);
  }
  else {
LAB_ram_4812de92:
    iVar1 = 0;
  }
  FUN_ram_4ff216e2(&DAT_ram_4ff6e0a0);
  return iVar1;
}


