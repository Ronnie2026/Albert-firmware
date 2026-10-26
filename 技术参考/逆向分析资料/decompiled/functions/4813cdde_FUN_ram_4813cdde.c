/* Firmware entry: 0x4813cdde */

void FUN_ram_4813cdde(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8b1,"tcp_pcb_remove",
                     "tcp_pcb_remove: invalid pcb");
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8b2,"tcp_pcb_remove",
                     "tcp_pcb_remove: invalid pcblist");
  }
  iVar2 = *param_1;
  if (*param_1 == param_2) {
    *param_1 = *(int *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0x34) = 0;
joined_r0x4813ce64:
    if (iVar2 != 0) goto LAB_ram_4813ce36;
LAB_ram_4813ce06:
    if ((*(ushort *)(param_2 + 0x46) & 1) != 0) {
      *(ushort *)(param_2 + 0x46) = *(ushort *)(param_2 + 0x46) | 2;
      FUN_ram_48141ae6(param_2);
      if (*(int *)(param_2 + 0x3c) == 1) {
        *(undefined4 *)(param_2 + 0x3c) = 0;
        *(undefined2 *)(param_2 + 0x42) = 0;
        return;
      }
    }
  }
  else {
    do {
      iVar1 = iVar2;
      if (iVar1 == 0) {
        iVar2 = *(int *)(param_2 + 0x3c);
        *(undefined4 *)(param_2 + 0x34) = 0;
        goto joined_r0x4813ce64;
      }
      iVar2 = *(int *)(iVar1 + 0x34);
    } while (*(int *)(iVar1 + 0x34) != param_2);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0x34) = 0;
    if (iVar2 == 0) goto LAB_ram_4813ce06;
LAB_ram_4813ce36:
    if (iVar2 != 10) {
      if (iVar2 == 1) {
        *(undefined4 *)(param_2 + 0x3c) = 0;
        *(undefined2 *)(param_2 + 0x42) = 0;
        return;
      }
      FUN_ram_4813cd48(param_2);
      if (*(int *)(param_2 + 0x3c) != 10) {
        if (*(int *)(param_2 + 0x3c) == 1) goto LAB_ram_4813ce26;
        goto LAB_ram_4813ce06;
      }
    }
  }
  if (*(int *)(param_2 + 0xb8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8c1,"tcp_pcb_remove",
                     "unsent segments leaking");
  }
  if (*(int *)(param_2 + 0xbc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8c2,"tcp_pcb_remove",
                     "unacked segments leaking");
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8c4,"tcp_pcb_remove",
                     "ooseq segments leaking");
  }
LAB_ram_4813ce26:
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined2 *)(param_2 + 0x42) = 0;
  return;
}


