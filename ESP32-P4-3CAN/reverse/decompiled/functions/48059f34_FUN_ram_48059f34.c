/* Firmware entry: 0x48059f34 */

void FUN_ram_48059f34(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 + 0xb30;
  cVar8 = '\0';
  do {
    iVar3 = FUN_ram_480599fe(param_1,1);
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    iVar6 = *(int *)(param_1 + 0x9784);
    if (iVar3 == 0) {
      if (iVar6 < -99) {
        fence();
        *(undefined1 *)(param_1 + 0x9788) = 0;
        goto LAB_ram_48059fa0;
      }
      if (cVar8 == '\x02') {
        if (iVar6 != 0) goto LAB_ram_48059f92;
LAB_ram_48059f88:
        *(undefined4 *)(param_1 + 0x9784) = 0xfffffffe;
LAB_ram_48059f92:
        fence();
        *(undefined1 *)(param_1 + 0x9788) = 0;
LAB_ram_48059fa0:
        FUN_ram_4ff3ee10(iVar2);
        return;
      }
    }
    else if (iVar6 == 0) {
      if ((*(int *)(param_1 + 0x9780) == *(int *)(param_1 + 0x977c)) &&
         (uVar4 = (uint)*(byte *)(param_1 + 0x9454), uVar4 == *(byte *)(param_1 + 0x96b0))) {
        if (uVar4 != 0) {
          piVar7 = (int *)(param_1 + 0x93f4);
          piVar5 = piVar7 + uVar4;
          do {
            piVar1 = piVar7 + 0x97;
            iVar3 = *piVar7;
            piVar7 = piVar7 + 1;
            if (*piVar1 != iVar3) goto LAB_ram_48059f82;
          } while (piVar7 != piVar5);
        }
        uVar4 = (uint)*(byte *)(param_1 + 0x94b8);
        if (uVar4 == *(byte *)(param_1 + 0x9714)) {
          if (uVar4 != 0) {
            piVar7 = (int *)(param_1 + 0x9458);
            piVar5 = piVar7 + uVar4;
            do {
              piVar1 = piVar7 + 0x97;
              iVar3 = *piVar7;
              piVar7 = piVar7 + 1;
              if (*piVar1 != iVar3) goto LAB_ram_48059f82;
            } while (piVar7 != piVar5);
          }
          uVar4 = (uint)*(byte *)(param_1 + 0x951c);
          if (uVar4 == *(byte *)(param_1 + 0x9778)) {
            if (uVar4 == 0) {
LAB_ram_4805a080:
              fence();
              *(undefined1 *)(param_1 + 0x9788) = 0;
              goto LAB_ram_48059fa0;
            }
            piVar7 = (int *)(param_1 + 0x94bc);
            piVar5 = piVar7 + uVar4;
            while (piVar1 = piVar7 + 0x97, iVar3 = *piVar7, piVar7 = piVar7 + 1, *piVar1 == iVar3) {
              if (piVar5 == piVar7) goto LAB_ram_4805a080;
            }
          }
        }
      }
LAB_ram_48059f82:
      if (cVar8 == '\x02') goto LAB_ram_48059f88;
    }
    else if (cVar8 == '\x02') goto LAB_ram_48059f92;
    cVar8 = cVar8 + '\x01';
    FUN_ram_4ff3ee10(iVar2);
  } while( true );
}


