/* Firmware entry: 0x4800bb96 */

undefined4 FUN_ram_4800bb96(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int aiStack_34 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    iVar8 = param_1 * 4;
    piVar6 = (int *)(&DAT_ram_4ff5a014 + iVar8);
    iVar5 = *piVar6;
    if (iVar5 != 0) {
      iVar7 = param_1 * 0x38;
      iVar1 = iVar7 + 0x4ff48230;
      FUN_ram_4ff3b5f0(*(undefined4 *)(iVar5 + 100),0xffffffff);
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      *(uint *)(*(int *)(&DAT_ram_4ff48228 + iVar7) + 0xc) =
           *(uint *)(*(int *)(&DAT_ram_4ff48228 + iVar7) + 0xc) & 0xfffffefe;
      FUN_ram_4ff3ee10(iVar1);
      while (iVar2 = FUN_ram_4ff36650(*(undefined4 *)(iVar5 + 0x5c),aiStack_34,0), iVar2 != 0) {
        FUN_ram_4ff3ec14(iVar1,0xffffffff);
        *(int *)(*piVar6 + 0x14) = *(int *)(*piVar6 + 0x14) - aiStack_34[0];
        FUN_ram_480084a8(param_1);
        FUN_ram_4ff3ee10(iVar1);
        FUN_ram_4ff367a4(*(undefined4 *)(iVar5 + 0x5c),iVar2);
        iVar2 = *piVar6;
        if ((*(char *)(iVar2 + 0x18) != '\0') &&
           (iVar2 = FUN_ram_4ff364a4(*(undefined4 *)(iVar2 + 0x5c),*(undefined4 *)(iVar2 + 0x1c),
                                     *(undefined1 *)(iVar2 + 0x20),0), iVar2 == 1)) {
          FUN_ram_4ff3ec14(iVar1,0xffffffff);
          iVar2 = *piVar6;
          *(undefined1 *)(iVar2 + 0x18) = 0;
          *(uint *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + (uint)*(byte *)(iVar2 + 0x20);
          FUN_ram_4ff3ee10(iVar1);
        }
      }
      FUN_ram_4ff3ec14();
      iVar2 = *(int *)(&DAT_ram_4ff5a014 + iVar8);
      if (*(int *)(iVar2 + 0x14) == 0) {
        *(undefined1 *)(iVar2 + 0x18) = 0;
        FUN_ram_4ff3ee10(iVar1);
        FUN_ram_4ff4309c(&DAT_ram_4ff48228 + iVar7);
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined1 *)(iVar2 + 0x18) = 0;
        FUN_ram_4ff3ee10(iVar1);
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: rx_buffered_len error\n",uVar3,
                         &DAT_ram_481b4c88);
        FUN_ram_4ff4309c(&DAT_ram_4ff48228 + iVar7);
      }
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      iVar7 = *(int *)(&DAT_ram_4ff48228 + param_1 * 0x38);
      uVar4 = *(uint *)(*(int *)(&DAT_ram_4ff5a014 + iVar8) + 0x24) & 0x101;
      *(uint *)(iVar7 + 0x10) = uVar4;
      *(uint *)(iVar7 + 0xc) = uVar4 | *(uint *)(iVar7 + 0xc);
      FUN_ram_4ff3ee10(iVar1);
      FUN_ram_4ff3afa2(*(undefined4 *)(iVar5 + 100),0,0,0);
      return 0;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_flush_input",0x70a);
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_flush_input",0x709);
  }
  return 0xffffffff;
}


