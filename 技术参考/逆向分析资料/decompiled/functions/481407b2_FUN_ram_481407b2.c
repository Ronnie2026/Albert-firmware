/* Firmware entry: 0x481407b2 */

undefined4 * FUN_ram_481407b2(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0xa6,"tcp_create_segment",
                     "tcp_create_segment: invalid pcb");
  }
  uVar2 = (param_5 & 1) * 4 + ((int)param_5 >> 2 & 4U);
  puVar5 = (undefined4 *)FUN_ram_4813956e(4);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_ram_4813ac74(param_2);
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(char *)((int)puVar5 + 10) = (char)param_5;
    uVar1 = *(ushort *)(param_2 + 8);
    *puVar5 = 0;
    puVar5[1] = param_2;
    if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0xb3,"tcp_create_segment",
                       "p->tot_len >= optlen");
    }
    *(ushort *)(puVar5 + 2) = uVar1 - (short)uVar2;
    iVar6 = FUN_ram_4813aab0(param_2,0x14);
    if (iVar6 == 0) {
      uVar4 = *(undefined2 *)(param_1 + 0x42);
      puVar9 = *(undefined1 **)(puVar5[1] + 4);
      puVar5[3] = puVar9;
      uVar3 = FUN_ram_48137fc8(uVar4);
      uVar4 = *(undefined2 *)(param_1 + 0x44);
      *puVar9 = (char)uVar3;
      puVar9[1] = (char)((ushort)uVar3 >> 8);
      iVar6 = puVar5[3];
      uVar4 = FUN_ram_48137fc8(uVar4);
      *(char *)(iVar6 + 2) = (char)uVar4;
      *(char *)(iVar6 + 3) = (char)((ushort)uVar4 >> 8);
      iVar6 = puVar5[3];
      uVar7 = FUN_ram_48137fd6(param_4);
      *(char *)(iVar6 + 4) = (char)uVar7;
      *(char *)(iVar6 + 7) = (char)((uint)uVar7 >> 0x18);
      *(char *)(iVar6 + 5) = (char)((uint)uVar7 >> 8);
      *(char *)(iVar6 + 6) = (char)((uint)uVar7 >> 0x10);
      iVar6 = puVar5[3];
      uVar4 = FUN_ram_48137fc8(param_3 | ((uVar2 >> 2) + 5) * 0x1000);
      iVar8 = puVar5[3];
      *(char *)(iVar6 + 0xc) = (char)uVar4;
      *(char *)(iVar6 + 0xd) = (char)((ushort)uVar4 >> 8);
      *(undefined1 *)(iVar8 + 0x12) = 0;
      *(undefined1 *)(iVar8 + 0x13) = 0;
    }
    else {
      FUN_ram_4813c78a(puVar5);
      puVar5 = (undefined4 *)0x0;
    }
  }
  return puVar5;
}


