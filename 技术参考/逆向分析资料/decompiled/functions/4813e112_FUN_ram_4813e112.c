/* Firmware entry: 0x4813e112 */

int * FUN_ram_4813e112(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
    piVar3 = param_2;
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    while( true ) {
      iVar2 = DAT_ram_4ff6e1e4;
      iVar4 = FUN_ram_48137fd6(*(undefined4 *)(piVar3[3] + 4));
      uVar1 = *(ushort *)(piVar3 + 2);
      uVar5 = FUN_ram_48137fc8(*(undefined2 *)(piVar3[3] + 0xc));
      if ((int)(((iVar2 - iVar4) - (uint)uVar1) - (uint)((uVar5 & 3) != 0)) < 0) {
        return piVar3;
      }
      param_2 = (int *)*piVar3;
      uVar5 = FUN_ram_4813b0d2(piVar3[1]);
      if (*(ushort *)(param_1 + 0xb2) < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x474,
                         "tcp_free_acked_segments","pcb->snd_queuelen >= pbuf_clen(next->p)");
      }
      iVar2 = piVar3[2];
      *(ushort *)(param_1 + 0xb2) = *(ushort *)(param_1 + 0xb2) - (short)uVar5;
      DAT_ram_4ff6e1e0 = (short)iVar2 + DAT_ram_4ff6e1e0;
      FUN_ram_4813c78a(piVar3);
      if (*(short *)(param_1 + 0xb2) == 0) break;
      piVar3 = param_2;
      if (param_2 == (int *)0x0) {
        if (param_3 != 0) {
          return (int *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_in.c",0x47e,
                         "tcp_free_acked_segments","tcp_receive: valid queue length");
      }
    }
  } while( true );
}


