/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package smartauditorium;

/**
 *
 * @author USER
 */
public class ekattor extends javax.swing.JFrame {

    /** Creates new form ekattor */
    public ekattor() {
        initComponents();
        this.setBounds(100,50,1120,700);
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        photo = new javax.swing.JButton();
        Description = new javax.swing.JButton();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jLabel10 = new javax.swing.JLabel();
        jLabel11 = new javax.swing.JLabel();
        Apply = new javax.swing.JButton();
        Back = new javax.swing.JButton();

        jLabel1.setText("jLabel1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jLabel2.setFont(new java.awt.Font("Tahoma", 1, 36)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(0, 0, 204));
        jLabel2.setText("71 Milonayoton");
        getContentPane().add(jLabel2);
        jLabel2.setBounds(30, 10, 300, 80);

        photo.setBackground(new java.awt.Color(102, 102, 102));
        photo.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        photo.setText("Photo");
        photo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                photoActionPerformed(evt);
            }
        });
        getContentPane().add(photo);
        photo.setBounds(20, 90, 250, 60);

        Description.setBackground(new java.awt.Color(255, 255, 255));
        Description.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        Description.setText("Description");
        Description.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                DescriptionActionPerformed(evt);
            }
        });
        getContentPane().add(Description);
        Description.setBounds(270, 90, 240, 60);

        jLabel3.setIcon(new javax.swing.ImageIcon(getClass().getResource("/smartauditorium/1.jpg"))); // NOI18N
        getContentPane().add(jLabel3);
        jLabel3.setBounds(20, 170, 490, 450);

        jLabel4.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel4.setText("Rent Plans");
        getContentPane().add(jLabel4);
        jLabel4.setBounds(590, 100, 140, 50);

        jLabel5.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        jLabel5.setText("Per Hours");
        getContentPane().add(jLabel5);
        jLabel5.setBounds(730, 130, 110, 40);

        jLabel6.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel6.setText("Auditorium only  :");
        getContentPane().add(jLabel6);
        jLabel6.setBounds(600, 260, 220, 50);

        jLabel7.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel7.setText("All Equipment     :");
        getContentPane().add(jLabel7);
        jLabel7.setBounds(600, 330, 220, 50);

        jLabel8.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel8.setText("400 TK");
        getContentPane().add(jLabel8);
        jLabel8.setBounds(850, 270, 90, 40);

        jLabel9.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel9.setText("300 TK");
        getContentPane().add(jLabel9);
        jLabel9.setBounds(850, 340, 90, 40);

        jLabel10.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel10.setText("Total Amount     :");
        getContentPane().add(jLabel10);
        jLabel10.setBounds(600, 480, 220, 40);

        jLabel11.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel11.setText("700 TK");
        getContentPane().add(jLabel11);
        jLabel11.setBounds(850, 490, 90, 30);

        Apply.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        Apply.setForeground(new java.awt.Color(0, 51, 204));
        Apply.setText("Apply");
        Apply.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ApplyActionPerformed(evt);
            }
        });
        getContentPane().add(Apply);
        Apply.setBounds(780, 570, 270, 50);

        Back.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        Back.setForeground(new java.awt.Color(0, 0, 153));
        Back.setText("Back");
        Back.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BackActionPerformed(evt);
            }
        });
        getContentPane().add(Back);
        Back.setBounds(570, 570, 160, 50);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void photoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_photoActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_photoActionPerformed

    private void DescriptionActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_DescriptionActionPerformed
        // TODO add your handling code here:
        description71 obj=new description71();
        obj.setVisible(true);
    }//GEN-LAST:event_DescriptionActionPerformed

    private void ApplyActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ApplyActionPerformed
        // TODO add your handling code here:
        apply obj=new apply();
        obj.setVisible(true);
    }//GEN-LAST:event_ApplyActionPerformed

    private void BackActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BackActionPerformed
        // TODO add your handling code here:
        venue1 obj=new venue1();
        obj.setVisible(true);
    }//GEN-LAST:event_BackActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(ekattor.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(ekattor.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(ekattor.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(ekattor.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new ekattor().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton Apply;
    private javax.swing.JButton Back;
    private javax.swing.JButton Description;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JButton photo;
    // End of variables declaration//GEN-END:variables

}
