/* Firmware entry: 0x48141572 */

undefined4 FUN_ram_48141572(int param_1)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x3ef,"tcp_send_fin",
                     "tcp_send_fin: invalid pcb");
  }
  piVar2 = *(int **)(param_1 + 0xb8);
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    do {
      piVar6 = piVar2;
      piVar2 = (int *)*piVar6;
    } while ((int *)*piVar6 != (int *)0x0);
    uVar3 = FUN_ram_48137fc8(*(undefined2 *)(piVar6[3] + 0xc));
    if ((uVar3 & 7) == 0) {
      uVar1 = *(ushort *)(piVar6[3] + 0xc);
      uVar3 = FUN_ram_48137fc8(1);
      uVar3 = uVar1 | uVar3;
      uVar1 = *(ushort *)(param_1 + 0x46);
      iVar5 = piVar6[3];
      *(char *)(iVar5 + 0xc) = (char)uVar3;
      *(char *)(iVar5 + 0xd) = (char)(uVar3 >> 8);
      *(ushort *)(param_1 + 0x46) = uVar1 | 0x20;
      return 0;
    }
  }
  uVar4 = FUN_ram_4814137a(param_1,1);
  return uVar4;
}


