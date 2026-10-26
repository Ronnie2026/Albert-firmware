/* Firmware entry: 0x4814137a */

undefined4 FUN_ram_4814137a(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  ushort uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 & 3) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x413,"tcp_enqueue_flags",
                     "tcp_enqueue_flags: need either TCP_SYN or TCP_FIN in flags (programmer violates API)"
                    );
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x415,"tcp_enqueue_flags",
                     "tcp_enqueue_flags: invalid pcb");
  }
  if ((param_2 & 2) == 0) {
    iVar2 = FUN_ram_4813ad9a(0x4a,0,0x280);
    uVar5 = 0;
    if (iVar2 == 0) goto LAB_ram_481414a6;
  }
  else {
    uVar6 = 8;
    uVar5 = 0x11;
    if ((*(int *)(param_1 + 0x3c) == 3) && (-1 < (int)((uint)*(ushort *)(param_1 + 0x46) << 0x13)))
    {
      uVar6 = 4;
      uVar5 = 1;
    }
    iVar2 = FUN_ram_4813ad9a(0x4a,uVar6,0x280);
    if (iVar2 == 0) goto LAB_ram_481414a6;
    if (*(ushort *)(iVar2 + 10) < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x43d,"tcp_enqueue_flags",
                       "tcp_enqueue_flags: check that first pbuf can hold optlen");
    }
  }
  iVar2 = FUN_ram_481407b2(param_1,iVar2,param_2,*(undefined4 *)(param_1 + 0xa8),uVar5);
  if (iVar2 != 0) {
    if ((*(uint *)(iVar2 + 0xc) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x446,"tcp_enqueue_flags",
                       "seg->tcphdr not aligned");
    }
    if (*(short *)(iVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x447,"tcp_enqueue_flags",
                       "tcp_enqueue_flags: invalid segment length");
    }
    piVar4 = *(int **)(param_1 + 0xb8);
    if (*(int **)(param_1 + 0xb8) == (int *)0x0) {
      *(int *)(param_1 + 0xb8) = iVar2;
    }
    else {
      do {
        piVar3 = piVar4;
        piVar4 = (int *)*piVar3;
      } while (piVar4 != (int *)0x0);
      *piVar3 = iVar2;
    }
    *(undefined2 *)(param_1 + 0xb4) = 0;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    if ((param_2 & 1) != 0) {
      *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x20;
    }
    sVar1 = FUN_ram_4813b0d2(*(undefined4 *)(iVar2 + 4));
    sVar1 = sVar1 + *(short *)(param_1 + 0xb2);
    *(short *)(param_1 + 0xb2) = sVar1;
    if (sVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x469,"tcp_enqueue_flags",
                     "tcp_enqueue_flags: invalid queue length");
  }
LAB_ram_481414a6:
  *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x80;
  return 0xffffffff;
}


