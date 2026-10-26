/* Firmware entry: 0x4812ee14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812ee14(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(_DAT_ram_4ffbffe8 + 4);
  *param_3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  piVar1 = param_1;
  do {
    if ((short)*piVar1 == 0x50aa) {
      if ((uVar5 < (uint)piVar1[1]) || (uVar5 < (uint)(piVar1[1] + piVar1[2]))) {
        if (param_2 != 0) {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"flash_parts",
                           "E (%lu) %s: partition %d invalid - offset 0x%lx size 0x%lx exceeds flash chip size 0x%lx\n"
                           ,uVar3,"flash_parts",iVar2,piVar1[1],piVar1[2],uVar5);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0x104;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x104;
      }
    }
    else {
      if ((short)*piVar1 != -0x1415) {
        if ((iVar2 != 0) && (*piVar1 == -1)) {
          *param_3 = iVar2 - iVar4;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        if (param_2 == 0) {
          return 0x103;
        }
        uVar3 = FUN_ram_4ff44d14(auStack_88);
        FUN_ram_4ff44bf0(1,"flash_parts","E (%lu) %s: partition %d invalid magic number 0x%x\n",
                         uVar3,"flash_parts",iVar2,(short)*piVar1);
        return 0x103;
      }
      if (iVar4 != 0) {
        if (param_2 == 0) {
          return 0x103;
        }
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"flash_parts","E (%lu) %s: Only one MD5 checksum is allowed\n",uVar3,
                         "flash_parts");
        return 0x103;
      }
      MD5Init();
      MD5Update(auStack_88,param_1,iVar2 << 5);
      MD5Final(auStack_98,auStack_88);
      iVar4 = FUN_ram_4ff4511a(piVar1 + 4,auStack_98,0x10);
      if (iVar4 != 0) {
        if (param_2 == 0) {
          return 0x103;
        }
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"flash_parts","E (%lu) %s: Incorrect MD5 checksum\n",uVar3,"flash_parts")
        ;
        return 0x103;
      }
      iVar4 = 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 8;
    if (iVar2 == 0x60) {
      if (param_2 != 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"flash_parts",
                         "E (%lu) %s: partition table has no terminating entry, not valid\n",uVar3,
                         "flash_parts");
      }
      return 0x103;
    }
  } while( true );
}


