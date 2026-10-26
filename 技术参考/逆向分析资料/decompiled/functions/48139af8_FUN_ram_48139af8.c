/* Firmware entry: 0x48139af8 */

int * FUN_ram_48139af8(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      int param_5,code *param_6,int param_7)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  if (param_6 != (code *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &DAT_ram_48236f9c;
    }
    if (param_3 == (undefined4 *)0x0) {
      param_3 = &DAT_ram_48236f9c;
    }
    if (param_4 == (undefined4 *)0x0) {
      param_4 = &DAT_ram_48236f9c;
    }
    param_1[0x2d] = (int)&LAB_ram_4813985a;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    piVar7 = param_1 + 0x13;
    piVar8 = param_1 + 0x26;
    piVar4 = param_1 + 0x25;
    do {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      piVar7[3] = 0;
      *(undefined1 *)(piVar7 + 4) = 0;
      *(undefined1 *)(piVar7 + 5) = 6;
      *(undefined1 *)piVar4 = 0;
      *piVar8 = 0;
      piVar8[3] = 0;
      piVar7 = piVar7 + 6;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar8 = piVar8 + 1;
    } while (piVar7 != param_1 + 0x25);
    param_1[0x2f] = (int)&LAB_ram_4813966a;
    *(undefined2 *)(param_1 + 0x37) = 0;
    *(undefined1 *)((int)param_1 + 0xe7) = 0;
    memset(param_1 + 0x31,0,0x14);
    *(undefined1 *)((int)param_1 + 0xeb) = 1;
    FUN_ram_4814c8e2(param_1);
    cVar2 = DAT_ram_4ff6e1a5;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x30] = param_5;
    param_1[0x2c] = param_7;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    *(undefined2 *)(param_1 + 0x41) = 0;
    *(undefined1 *)((int)param_1 + 0x106) = 0;
    *(char *)((int)param_1 + 0xea) = cVar2;
    FUN_ram_4813985e(param_1,param_2,param_3,param_4);
    iVar6 = (*param_6)(param_1);
    if (iVar6 == 0) {
      *(short *)((int)param_1 + 0xde) = (short)param_1[0x37];
      piVar4 = DAT_ram_4ff6e1ac;
      if (*(char *)((int)param_1 + 0xea) == -1) {
        *(undefined1 *)((int)param_1 + 0xea) = 0;
      }
      if (piVar4 == (int *)0x0) {
        cVar1 = *(char *)((int)param_1 + 0xea);
LAB_ram_48139c70:
        DAT_ram_4ff6e1a5 = '\0';
        if (cVar1 != -2) {
          DAT_ram_4ff6e1a5 = cVar1 + '\x01';
        }
        *param_1 = (int)piVar4;
        DAT_ram_4ff6e1ac = param_1;
        puVar3 = DAT_ram_4ff6e1b0;
        if ((*(byte *)((int)param_1 + 0xe7) & 0x20) != 0) {
          FUN_ram_48146ab6(param_1);
          puVar3 = DAT_ram_4ff6e1b0;
        }
        while (puVar3 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)puVar3[1];
          (*(code *)*puVar3)(param_1,1,0);
          puVar3 = puVar5;
        }
        return param_1;
      }
      do {
        iVar6 = 0x100;
        piVar7 = piVar4;
        while( true ) {
          if (param_1 == piVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x1a4,"netif_add",
                             "netif already added");
          }
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x1a6,"netif_add",
                             "too many netifs, max. supported number is 255");
          }
          cVar1 = *(char *)((int)param_1 + 0xea);
          cVar2 = *(char *)((int)piVar7 + 0xea);
          if (cVar2 == cVar1) break;
          piVar7 = (int *)*piVar7;
          if (piVar7 == (int *)0x0) goto LAB_ram_48139c70;
        }
        if (cVar2 == -2) {
          *(undefined1 *)((int)param_1 + 0xea) = 0;
        }
        else {
          *(char *)((int)param_1 + 0xea) = cVar2 + '\x01';
        }
      } while( true );
    }
  }
  return (int *)0x0;
}


