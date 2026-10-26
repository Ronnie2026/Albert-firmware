/* Firmware entry: 0x481462ea */

undefined4 FUN_ram_481462ea(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint *puVar5;
  undefined2 uStack_18;
  undefined1 uStack_16;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",799,"etharp_output",
                     "netif != NULL");
  }
  if (param_2 != 0) {
    if (param_3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x321,"etharp_output",
                       "ipaddr != NULL");
    }
    iVar1 = FUN_ram_48147794(*param_3,param_1);
    if (iVar1 == 0) {
      uVar3 = *param_3;
      if ((uVar3 & 0xf0) != 0xe0) {
        if ((((*(uint *)(param_1 + 4) ^ uVar3) & *(uint *)(param_1 + 0x1c)) != 0) &&
           ((uVar3 & 0xffff) != 0xfea9)) {
          if (*(int *)(param_1 + 0x34) == 0) {
            return 0xfffffffc;
          }
          param_3 = (uint *)(param_1 + 0x34);
        }
        uVar3 = (uint)DAT_ram_4ff6e218;
        if ((((byte)(&DAT_ram_4ff6cf5c)[uVar3 * 0x18] < 2) ||
            ((&DAT_ram_4ff6cf50)[uVar3 * 6] != param_1)) ||
           (*param_3 != (&DAT_ram_4ff6cf4c)[uVar3 * 6])) {
          puVar5 = &DAT_ram_4ff6cf4c;
          uVar3 = 0;
          while ((((byte)puVar5[4] < 2 || (puVar5[1] != param_1)) || (*param_3 != *puVar5))) {
            uVar3 = uVar3 + 1 & 0xff;
            puVar5 = puVar5 + 6;
            if (uVar3 == 10) {
              uVar2 = FUN_ram_481460ca(param_1,param_3,param_2);
              return uVar2;
            }
          }
          DAT_ram_4ff6e218 = (byte)uVar3;
        }
        uVar2 = FUN_ram_48145d38(param_1,param_2,uVar3);
        return uVar2;
      }
      uStack_14 = *(undefined1 *)((int)param_3 + 2);
      uStack_13 = *(undefined1 *)((int)param_3 + 3);
      bStack_15 = *(byte *)((int)param_3 + 1) & 0x7f;
      uStack_18 = 1;
      uStack_16 = 0x5e;
      puVar4 = &uStack_18;
    }
    else {
      puVar4 = (undefined2 *)&DAT_ram_48237090;
    }
    uVar2 = FUN_ram_4814ca06(param_1,param_2,param_1 + 0xe0,puVar4,0x800);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",800,"etharp_output",
                   "q != NULL");
}


