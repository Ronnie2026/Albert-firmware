/* Firmware entry: 0x481422c2 */

undefined4 FUN_ram_481422c2(int param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x892,"tcp_zero_window_probe",
                     "tcp_zero_window_probe: invalid pcb");
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xee) != -1) {
      *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
    }
    uVar4 = FUN_ram_48137fc8(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 0xc));
    if ((uVar4 & 1) == 0) {
      bVar7 = true;
      bVar1 = false;
    }
    else {
      bVar1 = *(short *)(iVar3 + 8) == 0;
      bVar7 = *(short *)(iVar3 + 8) != 0;
    }
    iVar5 = FUN_ram_48140908(*(undefined4 *)(param_1 + 0x50),0,bVar7,
                             *(undefined4 *)(*(int *)(iVar3 + 0xc) + 4),
                             *(undefined2 *)(param_1 + 0x42),*(undefined2 *)(param_1 + 0x44),0x10,
                             *(undefined2 *)(param_1 + 0x56));
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      iVar8 = *(int *)(iVar5 + 4);
      *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x56);
      if (bVar1) {
        uVar2 = *(ushort *)(iVar8 + 0xc);
        uVar4 = FUN_ram_48137fc8(0x11);
        uVar4 = uVar4 | uVar2 & 0xffffc0ff;
        *(char *)(iVar8 + 0xc) = (char)uVar4;
        *(char *)(iVar8 + 0xd) = (char)(uVar4 >> 8);
      }
      else {
        FUN_ram_4813b38c(*(int *)(iVar3 + 4),iVar8 + 0x14,1,
                         *(short *)(*(int *)(iVar3 + 4) + 8) - *(short *)(iVar3 + 8));
      }
      iVar3 = FUN_ram_48137fd6(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 4));
      if (*(int *)(param_1 + 0x9c) - (iVar3 + 1) < 0) {
        *(int *)(param_1 + 0x9c) = iVar3 + 1;
      }
      iVar3 = FUN_ram_48140a3a(param_1,param_1,param_1 + 0x18);
      if (iVar3 != 0) {
        uVar6 = FUN_ram_48140a62(param_1,iVar5,param_1,param_1 + 0x18);
        return uVar6;
      }
      FUN_ram_4813ac74(iVar5);
      uVar6 = 0xfffffffc;
    }
    return uVar6;
  }
  return 0;
}


