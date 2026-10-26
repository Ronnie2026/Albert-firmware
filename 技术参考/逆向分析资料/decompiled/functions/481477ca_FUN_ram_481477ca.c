/* Firmware entry: 0x481477ca */

undefined4 FUN_ram_481477ca(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint local_20 [3];
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = (uint)*param_1;
  if (((&DAT_ram_4823af31)[uVar5] & 4) == 0) {
    return 0;
  }
  puVar7 = local_20;
  do {
    iVar6 = 10;
    if (uVar5 == 0x30) {
      uVar5 = (uint)param_1[1];
      if ((uVar5 & 0xdf) == 0x58) {
        uVar5 = (uint)param_1[2];
        iVar6 = 0x10;
        param_1 = param_1 + 2;
      }
      else {
        param_1 = param_1 + 1;
        iVar6 = 8;
      }
    }
    bVar4 = (&DAT_ram_4823af31)[uVar5];
    param_1 = param_1 + 1;
    uVar1 = 0;
    if ((bVar4 & 4) == 0) goto LAB_ram_48147842;
    while ((iVar6 != 8 || (uVar5 - 0x30 < 8))) {
      bVar4 = *param_1;
      uVar1 = (iVar6 * uVar1 + uVar5) - 0x30;
      while( true ) {
        param_1 = param_1 + 1;
        uVar5 = (uint)bVar4;
        bVar4 = (&DAT_ram_4823af31)[uVar5];
        if ((bVar4 & 4) != 0) break;
LAB_ram_48147842:
        if ((iVar6 != 0x10) || ((bVar4 & 0x44) == 0)) goto LAB_ram_48147872;
        iVar3 = 0x41;
        if ((bVar4 & 3) == 2) {
          iVar3 = 0x61;
        }
        uVar1 = uVar1 << 4 | (uVar5 + 10) - iVar3;
        bVar4 = *param_1;
      }
    }
LAB_ram_48147872:
    if (uVar5 != 0x2e) {
      if ((uVar5 != 0) && ((bVar4 & 8) == 0)) {
        return 0;
      }
      iVar6 = (int)puVar7 - (int)local_20 >> 2;
      iVar3 = iVar6 + 1;
      if (iVar3 == 2) {
        if (0xffffff < uVar1) {
          return 0;
        }
        if (0xff < local_20[0]) {
          return 0;
        }
        uVar1 = uVar1 | local_20[0] << 0x18;
      }
      else if (iVar3 < 3) {
        if (iVar6 == -1) {
          return 0;
        }
        if (iVar3 != 1) {
LAB_ram_4814791e:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/ip4_addr.c",0xfb,"ip4addr_aton",
                           "unhandled");
        }
      }
      else if (iVar3 == 3) {
        if (0xffff < uVar1) {
          return 0;
        }
        if (0xff < local_20[0]) {
          return 0;
        }
        if (0xff < local_20[1]) {
          return 0;
        }
        uVar1 = uVar1 | local_20[0] << 0x18 | local_20[1] << 0x10;
      }
      else {
        if (iVar3 != 4) goto LAB_ram_4814791e;
        if (0xff < uVar1) {
          return 0;
        }
        if (0xff < local_20[0]) {
          return 0;
        }
        if (0xff < local_20[1]) {
          return 0;
        }
        if (0xff < local_20[2]) {
          return 0;
        }
        uVar1 = uVar1 | local_20[0] << 0x18 | local_20[1] << 0x10 | local_20[2] << 8;
      }
      if (param_2 != (undefined4 *)0x0) {
        uVar2 = FUN_ram_48137fd6(uVar1);
        *param_2 = uVar2;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    if (puVar7 == auStack_14) {
      return 0;
    }
    uVar5 = (uint)*param_1;
    *puVar7 = uVar1;
    puVar7 = puVar7 + 1;
    if (((&DAT_ram_4823af31)[uVar5] & 4) == 0) {
      return 0;
    }
  } while( true );
}


