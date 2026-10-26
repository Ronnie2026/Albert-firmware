/* Firmware entry: 0x4ff406aa */

void FUN_ram_4ff406aa(void)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  int local_50;
  code *pcStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
LAB_ram_4ff406de:
  do {
    if (*DAT_ram_4ff6e164 == 0) {
      FUN_ram_4ff3ec14(&DAT_ram_4ff47f58,0xffffffff);
      pcVar6 = (code *)FUN_ram_4ff3c5d4();
      if (pcVar6 < DAT_ram_4ff6e154) goto LAB_ram_4ff407ee;
      bVar7 = *DAT_ram_4ff6e160 == 0;
      pcVar10 = (code *)0x0;
LAB_ram_4ff40712:
      DAT_ram_4ff6e154 = pcVar6;
      FUN_ram_4ff3bac2(DAT_ram_4ff6e15c,(int)pcVar10 - (int)pcVar6,bVar7);
      FUN_ram_4ff3ee10(&DAT_ram_4ff47f58);
      FUN_ram_4ff3ef0e();
    }
    else {
      pcVar10 = *(code **)DAT_ram_4ff6e164[3];
      FUN_ram_4ff3ec14(&DAT_ram_4ff47f58,0xffffffff);
      uVar11 = FUN_ram_4ff3c5d4();
      pcVar6 = (code *)uVar11;
      if (pcVar6 < DAT_ram_4ff6e154) {
LAB_ram_4ff407ee:
        while (piVar2 = DAT_ram_4ff6e164, *DAT_ram_4ff6e164 != 0) {
          FUN_ram_4ff40610(*(undefined4 *)DAT_ram_4ff6e164[3],0xffffffff);
        }
        DAT_ram_4ff6e164 = DAT_ram_4ff6e160;
        DAT_ram_4ff6e160 = piVar2;
        DAT_ram_4ff6e154 = pcVar6;
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f58);
      }
      else {
        bVar7 = false;
        if (pcVar6 < pcVar10) goto LAB_ram_4ff40712;
        DAT_ram_4ff6e154 = pcVar6;
        FUN_ram_4ff3ee10(&DAT_ram_4ff47f58,(int)((ulonglong)uVar11 >> 0x20),0);
        FUN_ram_4ff40610(pcVar10,pcVar6);
      }
    }
LAB_ram_4ff4072a:
    iVar4 = FUN_ram_4ff3b4aa(DAT_ram_4ff6e15c,&local_50,0);
    iVar5 = iStack_48;
    if (iVar4 != 0) {
joined_r0x4ff4073c:
      iStack_48 = iVar5;
      if ((local_50 < 0) && (iVar5 = (*pcStack_4c)(iVar5,uStack_44), local_50 < 0))
      goto LAB_ram_4ff4072a;
      iVar4 = iStack_48;
      if (*(int *)(iStack_48 + 0x14) != 0) {
        iVar5 = FUN_ram_4ff3fb48(iStack_48 + 4);
      }
      pcVar6 = (code *)FUN_ram_4ff3c5d4(iVar5);
      piVar2 = DAT_ram_4ff6e160;
      piVar3 = DAT_ram_4ff6e164;
      if (pcVar6 < DAT_ram_4ff6e154) {
        while (piVar2 = DAT_ram_4ff6e164, piVar3 = DAT_ram_4ff6e160, *DAT_ram_4ff6e164 != 0) {
          FUN_ram_4ff40610(*(undefined4 *)DAT_ram_4ff6e164[3],0xffffffff);
        }
      }
      DAT_ram_4ff6e164 = piVar3;
      DAT_ram_4ff6e160 = piVar2;
      DAT_ram_4ff6e154 = pcVar6;
      if (local_50 == 5) {
        if ((*(byte *)(iVar4 + 0x28) & 2) == 0) {
          thunk_FUN_ram_4ff209c6(iVar4);
        }
        else {
          *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 0xfe;
        }
        goto LAB_ram_4ff4072a;
      }
      if (5 < local_50) {
        if (local_50 == 8) goto LAB_ram_4ff408f0;
        if (8 < local_50) {
          if (local_50 == 9) goto LAB_ram_4ff408c0;
          goto LAB_ram_4ff4072a;
        }
LAB_ram_4ff4077c:
        bVar1 = *(byte *)(iVar4 + 0x28);
        pcVar8 = *(code **)(iVar4 + 0x18);
        *(int *)(iVar4 + 0x10) = iVar4;
        pcVar10 = pcStack_4c + (int)pcVar8;
        *(byte *)(iVar4 + 0x28) = bVar1 | 1;
        *(code **)(iVar4 + 4) = pcVar10;
        if (pcVar6 < pcVar10) {
          if ((pcStack_4c <= pcVar6) || (pcVar10 < pcStack_4c)) goto LAB_ram_4ff40904;
        }
        else if (pcVar6 + -(int)pcStack_4c < pcVar8) goto LAB_ram_4ff408e2;
        if ((bVar1 & 4) != 0) {
          do {
            pcVar9 = pcVar8 + (int)pcVar10;
            *(int *)(iVar4 + 0x10) = iVar4;
            *(code **)(iVar4 + 4) = pcVar9;
            if (pcVar6 < pcVar9) {
              if ((pcVar10 <= pcVar6) || (pcVar9 < pcVar8)) goto LAB_ram_4ff4087c;
            }
            else if (pcVar6 + -(int)pcVar10 < pcVar8) {
              FUN_ram_4ff3fb10(DAT_ram_4ff6e160,iVar4 + 4);
              goto LAB_ram_4ff407b6;
            }
            (**(code **)(iVar4 + 0x20))(iVar4);
            pcVar8 = *(code **)(iVar4 + 0x18);
            pcVar10 = pcVar9;
          } while( true );
        }
        *(byte *)(iVar4 + 0x28) = bVar1 & 0xfe;
        goto LAB_ram_4ff407b6;
      }
      if (local_50 == 3) {
LAB_ram_4ff408f0:
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) & 0xfe;
        goto LAB_ram_4ff4072a;
      }
      if (local_50 != 4) {
        if (local_50 - 1U < 2) goto LAB_ram_4ff4077c;
        goto LAB_ram_4ff4072a;
      }
LAB_ram_4ff408c0:
      *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 1;
      *(code **)(iVar4 + 0x18) = pcStack_4c;
      if (pcStack_4c == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("timers.c",0x3b7,"prvProcessReceivedCommands",
                         "( pxTimer->xTimerPeriodInTicks > 0 )");
      }
      *(code **)(iVar4 + 4) = pcStack_4c + (int)pcVar6;
      *(int *)(iVar4 + 0x10) = iVar4;
      if (pcVar6 < pcStack_4c + (int)pcVar6) {
LAB_ram_4ff40904:
        FUN_ram_4ff3fb10(DAT_ram_4ff6e164,iVar4 + 4);
        goto LAB_ram_4ff4072a;
      }
LAB_ram_4ff408e2:
      FUN_ram_4ff3fb10(DAT_ram_4ff6e160,iVar4 + 4);
      goto LAB_ram_4ff4072a;
    }
  } while( true );
LAB_ram_4ff4087c:
  FUN_ram_4ff3fb10(DAT_ram_4ff6e164,iVar4 + 4);
LAB_ram_4ff407b6:
  (**(code **)(iVar4 + 0x20))(iVar4);
  iVar4 = FUN_ram_4ff3b4aa(DAT_ram_4ff6e15c,&local_50,0);
  iVar5 = iStack_48;
  if (iVar4 == 0) goto LAB_ram_4ff406de;
  goto joined_r0x4ff4073c;
}


