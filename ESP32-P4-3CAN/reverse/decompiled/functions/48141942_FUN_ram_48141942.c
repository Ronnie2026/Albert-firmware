/* Firmware entry: 0x48141942 */

int FUN_ram_48141942(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x82d,"tcp_send_empty_ack",
                     "tcp_send_empty_ack: invalid pcb");
  }
  if (((int)((uint)*(ushort *)(param_1 + 0x46) << 0x13) < 0) &&
     (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x5c))) {
    if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 100)) {
      uVar1 = 0xc;
      iVar7 = 1;
    }
    else if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x70)) {
      uVar1 = 0x14;
      iVar7 = 2;
    }
    else {
      uVar1 = 0x24;
      iVar7 = 4;
      if (*(int *)(param_1 + 0x74) == *(int *)(param_1 + 0x78)) {
        uVar1 = 0x1c;
        iVar7 = 3;
      }
    }
    uVar2 = FUN_ram_48137fd6(*(undefined4 *)(param_1 + 0x9c));
    iVar3 = FUN_ram_48140908(*(undefined4 *)(param_1 + 0x50),uVar1,0,uVar2,
                             *(undefined2 *)(param_1 + 0x42),*(undefined2 *)(param_1 + 0x44),0x10,
                             *(undefined2 *)(param_1 + 0x56));
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 4);
      *(uint *)(param_1 + 0x58) = (uint)*(ushort *)(param_1 + 0x56) + *(int *)(param_1 + 0x50);
      *(uint *)(iVar5 + 0x14) = (iVar7 * 8 + 0x1010502) * 0x1000000 | 0x50101;
      iVar4 = param_1;
      puVar6 = (undefined4 *)(iVar5 + 0x18);
      do {
        iVar5 = iVar4 + 8;
        uVar1 = FUN_ram_48137fd6(*(undefined4 *)(iVar4 + 0x5c));
        *puVar6 = uVar1;
        uVar1 = FUN_ram_48137fd6(*(undefined4 *)(iVar4 + 0x60));
        puVar6[1] = uVar1;
        iVar4 = iVar5;
        puVar6 = puVar6 + 2;
      } while (iVar5 != iVar7 * 8 + param_1);
      goto LAB_ram_481419f8;
    }
  }
  else {
    uVar1 = FUN_ram_48137fd6(*(undefined4 *)(param_1 + 0x9c));
    iVar3 = FUN_ram_48140908(*(undefined4 *)(param_1 + 0x50),0,0,uVar1,
                             *(undefined2 *)(param_1 + 0x42),*(undefined2 *)(param_1 + 0x44),0x10,
                             *(undefined2 *)(param_1 + 0x56));
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x58) = (uint)*(ushort *)(param_1 + 0x56) + *(int *)(param_1 + 0x50);
LAB_ram_481419f8:
      iVar7 = FUN_ram_48140a3a(param_1,param_1,param_1 + 0x18);
      if (iVar7 == 0) {
        FUN_ram_4813ac74(iVar3);
        iVar7 = -4;
      }
      else {
        iVar7 = FUN_ram_48140a62(param_1,iVar3,param_1,param_1 + 0x18);
        if (iVar7 == 0) {
          *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) & 0xfffc;
          return 0;
        }
      }
      *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 3;
      return iVar7;
    }
  }
  *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 3;
  return -2;
}


