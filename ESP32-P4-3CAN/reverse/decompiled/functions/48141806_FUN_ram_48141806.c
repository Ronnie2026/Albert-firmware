/* Firmware entry: 0x48141806 */

void FUN_ram_48141806(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x6fd,"tcp_rexmit_fast",
                     "tcp_rexmit_fast: invalid pcb");
  }
  if (((*(int *)(param_1 + 0xbc) != 0) && ((*(ushort *)(param_1 + 0x46) & 4) == 0)) &&
     (iVar1 = FUN_ram_48141714(), iVar1 == 0)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xac);
    if ((uint)*(ushort *)(param_1 + 0x94) < (uint)*(ushort *)(param_1 + 0xac)) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x94);
    }
    uVar2 = (uint)*(ushort *)(param_1 + 0x7e);
    sVar3 = (short)(uVar4 >> 1);
    *(short *)(param_1 + 0x96) = sVar3;
    if ((uint)((int)uVar4 >> 1) < uVar2 << 1) {
      sVar3 = (short)((uVar2 & 0x7fff) << 1);
      *(short *)(param_1 + 0x96) = (short)((uVar2 << 0x11) >> 0x10);
    }
    *(ushort *)(param_1 + 0x94) = sVar3 + *(ushort *)(param_1 + 0x7e) + (short)(uVar2 << 1);
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 4;
    return;
  }
  return;
}


