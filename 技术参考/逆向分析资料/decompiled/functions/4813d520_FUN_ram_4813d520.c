/* Firmware entry: 0x4813d520 */

undefined4 FUN_ram_4813d520(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x15e,"tcp_close_shutdown",
                     "tcp_close_shutdown: invalid pcb");
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if ((param_2 == 0) || ((iVar3 != 4 && (iVar3 != 7)))) {
    if (iVar3 == 1) {
      ppuVar2 = &PTR_DAT_ram_4ff6e1c8_ram_48236b38;
      do {
        for (iVar3 = *(int *)ppuVar2[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
          while (param_1 == *(int *)(iVar3 + 200)) {
            *(undefined4 *)(iVar3 + 200) = 0;
            iVar3 = *(int *)(iVar3 + 0x34);
            if (iVar3 == 0) goto LAB_ram_4813d66e;
          }
        }
LAB_ram_4813d66e:
        ppuVar2 = ppuVar2 + 1;
        if (ppuVar2 == (undefined **)&DAT_ram_48236b44) {
          FUN_ram_4813cdde(&DAT_ram_4ff6e1c8,param_1);
          if (*(int *)(param_1 + 0x3c) != 1) {
            FUN_ram_48139604(3,param_1);
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0xdf,"tcp_free_listen",
                           "tcp_free_listen: !LISTEN");
        }
      } while( true );
    }
    if (iVar3 != 2) {
      if (iVar3 != 0) goto LAB_ram_4813d61e;
      if (*(short *)(param_1 + 0x42) != 0) {
        iVar3 = DAT_ram_4ff6e1cc;
        if (DAT_ram_4ff6e1cc == param_1) {
          DAT_ram_4ff6e1cc = *(int *)(param_1 + 0x34);
        }
        else {
          do {
            iVar4 = iVar3;
            if (iVar4 == 0) goto LAB_ram_4813d6a2;
            iVar3 = *(int *)(iVar4 + 0x34);
          } while (*(int *)(iVar4 + 0x34) != param_1);
          *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_1 + 0x34);
        }
LAB_ram_4813d6a2:
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      goto LAB_ram_4813d60a;
    }
    FUN_ram_4813cdde(&DAT_ram_4ff6e1c4,param_1);
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  else {
    if ((*(int *)(param_1 + 0xc4) == 0) && (*(short *)(param_1 + 0x54) == -2)) {
LAB_ram_4813d61e:
      uVar1 = FUN_ram_4813c0ca(param_1);
      return uVar1;
    }
    if ((*(ushort *)(param_1 + 0x46) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x164,"tcp_close_shutdown",
                       "pcb->flags & TF_RXCLOSED");
    }
    FUN_ram_481418a4(param_1,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x50),param_1
                     ,param_1 + 0x18,*(undefined2 *)(param_1 + 0x42),*(undefined2 *)(param_1 + 0x44)
                    );
    if ((1 < *(uint *)(param_1 + 0x3c)) && (*(uint *)(param_1 + 0x3c) != 10)) {
      FUN_ram_4813cd48(param_1);
    }
    iVar3 = DAT_ram_4ff6e1c4;
    if (DAT_ram_4ff6e1c4 == param_1) {
      DAT_ram_4ff6e1c4 = *(int *)(param_1 + 0x34);
    }
    else {
      do {
        iVar4 = iVar3;
        if (iVar4 == 0) goto LAB_ram_4813d5c6;
        iVar3 = *(int *)(iVar4 + 0x34);
      } while (*(int *)(iVar4 + 0x34) != param_1);
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    }
LAB_ram_4813d5c6:
    iVar3 = DAT_ram_4ff6e1d4;
    *(undefined4 *)(param_1 + 0x34) = 0;
    DAT_ram_4ff6e1be = 1;
    if (iVar3 == param_1) {
      FUN_ram_481407a0();
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  DAT_ram_4ff6e1be = 1;
  if (iVar3 == 1) {
    DAT_ram_4ff6e1be = 1;
                    /* WARNING: Subroutine does not return */
    FUN_ram_4813bf7c();
  }
LAB_ram_4813d60a:
  FUN_ram_48139604(2,param_1);
  return 0;
}


