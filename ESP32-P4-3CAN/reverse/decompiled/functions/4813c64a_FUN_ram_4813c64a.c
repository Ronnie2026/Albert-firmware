/* Firmware entry: 0x4813c64a */

void FUN_ram_4813c64a(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x3dc,"tcp_recved",
                     "don\'t call tcp_recved for listen-pcbs");
  }
  uVar2 = param_2 + (uint)*(ushort *)(param_1 + 0x54);
  uVar3 = uVar2 & 0xffff;
  if ((uVar3 == 0xffff) || (uVar3 < *(ushort *)(param_1 + 0x54))) {
    uVar3 = 0xfffe;
    iVar7 = *(int *)(param_1 + 0x50);
    uVar1 = *(ushort *)(param_1 + 0x7e);
    *(undefined2 *)(param_1 + 0x54) = 0xfffe;
    iVar5 = iVar7 + 0xfffe;
    iVar4 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x50);
    uVar1 = *(ushort *)(param_1 + 0x7e);
    *(short *)(param_1 + 0x54) = (short)(uVar2 * 0x10000 >> 0x10);
    iVar5 = iVar7 + uVar3;
    iVar4 = *(int *)(param_1 + 0x58);
  }
  if (uVar1 < 0x8000) {
    iVar6 = (uint)uVar1 + iVar4;
  }
  else {
    iVar6 = iVar4 + 0x7fff;
  }
  if (iVar5 - iVar6 < 0) {
    uVar3 = iVar4 - iVar7;
    if ((int)uVar3 < 0) {
      *(undefined2 *)(param_1 + 0x56) = 0;
      return;
    }
    if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x3c0,"tcp_update_rcv_ann_wnd",
                       "new_rcv_ann_wnd <= 0xffff");
    }
    *(short *)(param_1 + 0x56) = (short)uVar3;
  }
  else {
    *(short *)(param_1 + 0x56) = (short)uVar3;
    if (0x167f < (uint)(iVar5 - iVar4)) {
      *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 2;
      FUN_ram_48141ae6();
      return;
    }
  }
  return;
}


