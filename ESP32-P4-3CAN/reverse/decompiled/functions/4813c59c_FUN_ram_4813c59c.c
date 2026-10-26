/* Firmware entry: 0x4813c59c */

int FUN_ram_4813c59c(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x3b0,"tcp_update_rcv_ann_wnd",
                     "tcp_update_rcv_ann_wnd: invalid pcb");
  }
  uVar2 = *(ushort *)(param_1 + 0x54);
  uVar4 = *(ushort *)(param_1 + 0x7e);
  iVar1 = ((uint)uVar2 - *(int *)(param_1 + 0x58)) + *(int *)(param_1 + 0x50);
  if (0x7fff < uVar4) {
    uVar4 = 0x7fff;
  }
  if ((int)(iVar1 - (uint)uVar4) < 0) {
    uVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50);
    if ((int)uVar3 < 0) {
      *(undefined2 *)(param_1 + 0x56) = 0;
      return 0;
    }
    if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x3c0,"tcp_update_rcv_ann_wnd",
                       "new_rcv_ann_wnd <= 0xffff");
    }
    uVar2 = (ushort)uVar3;
    iVar1 = 0;
  }
  *(ushort *)(param_1 + 0x56) = uVar2;
  return iVar1;
}


